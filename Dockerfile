FROM ubuntu:18.04

ENV DEBIAN_FRONTEND=noninteractive

# install main utils
RUN apt-get update \
	&& apt-get install -y \
		wget \
		sudo \
		vim \
		emacs \
		build-essential \
		git \
		clang-9 \
		libclang-9-dev \
		libncurses5-dev \
		libbsd-dev \
		libc6-dbg \
		cmake \
		openssh-server \
	&& mv /usr/bin/clang-9 /usr/bin/clang \
	&& mkdir $HOME/.ssh

# install php in an automated fassion
RUN ln -fs /usr/share/zoneinfo/Europe/Amsterdam /etc/localtime \
	&& apt-get install -y php \
	&& dpkg-reconfigure --frontend noninteractive php

# install valgrind
RUN cd /tmp \
	&& wget ftp://sourceware.org/pub/valgrind/valgrind-3.13.0.tar.bz2 \
	&& tar xjf valgrind-3.13.0.tar.bz2 \
	&& cd valgrind-3.13.0 \
	&& ./configure \
	&& make -j$(nproc) \
	&& make install

# install include-what-you-use
RUN cd $HOME \
	&& mkdir -p iwyu/build && cd iwyu \
	&& git clone -b clang_9.0 https://github.com/include-what-you-use/include-what-you-use.git \
	&& cd build \
	&& cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=/usr/lib/llvm-9 ../include-what-you-use \
	&& make \
	&& echo 'export PATH="$HOME/iwyu/build/bin:$PATH"' >> $HOME/.bashrc

# move norm apps inside
ADD norm /app/norm

# install and configure norm apps
RUN echo 'alias norminette+="python /app/norm/codam-norminette-plus/run.py"' >> $HOME/.bashrc \
	&& cd /app/norm && tar -xf norminette-external-debian-ubuntu.tar \
	&& sed -i \
		-e 's/sudo apt-get/echo "password" | sudo -S apt-get/' \
		-e 's/\/usr\/local\/bin\/bundle/sudo \/usr\/local\/bin\/bundle/' \
		norminette-external-debian-ubuntu/install.sh \
	&& useradd -g sudo -m -p $(perl -e 'print crypt("password", "salt")') norminette \
	&& export USER=norminette \
	&& cd norminette-external-debian-ubuntu && sudo -u norminette ./install.sh

# move testers inside
ADD testers /app/testers
RUN chmod +x /app/testers/libft/personal/test.sh \
	&& sed -i -e 's/-Werror//' /app/testers/libft/libft-unit-test/Makefile \
	&& chmod +x /app/testers/gnl/gnl_unit_tests/run_tests.sh \
	&& chmod +x /app/testers/printf/personal/test.sh

# install pft 2019 tester
RUN cd /app/testers/printf \
	&& git clone https://github.com/gavinfielder/pft.git pft_2019 \
	&& echo "pft_2019/" >> .gitignore \
	&& cd pft_2019 \
	&& rm unit_tests.c \
	&& rm options-config.ini \
	&& git clone https://github.com/cclaude42/PFT_2019.git temp \
	&& cp temp/unit_tests.c . \
	&& cp temp/options-config.ini . \
	&& rm -rf temp \
	&& sed -i -e 's/INCLUDE_LIBPTHREAD=0/INCLUDE_LIBPTHREAD=1/' options-config.ini 
