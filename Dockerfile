FROM ubuntu:18.04

# install main utils
RUN apt-get update \
	&& apt-get install -y \
		wget \
		sudo \
		build-essential \
		git \
		clang-9 \
		libclang-9-dev \
		libc6-dbg \
		cmake \
		openssh-server \
	&& mv /usr/bin/clang-9 /usr/bin/clang \
	&& mkdir $HOME/.ssh

# install valgrind
RUN cd /tmp && \
	wget ftp://sourceware.org/pub/valgrind/valgrind-3.13.0.tar.bz2 && \
	tar xjf valgrind-3.13.0.tar.bz2 && \
	cd valgrind-3.13.0 && \
	./configure && \
	make -j$(nproc) && \
	make install

# install include-what-you-use
RUN cd $HOME && \
	mkdir -p iwyu/build && cd iwyu && \
	git clone -b clang_9.0 https://github.com/include-what-you-use/include-what-you-use.git && cd build && \
	cmake -G "Unix Makefiles" -DCMAKE_PREFIX_PATH=/usr/lib/llvm-9 ../include-what-you-use && \
	make && \
	echo 'export PATH="$HOME/iwyu/build/bin:$PATH"' >> $HOME/.bashrc

# move norm apps inside
ADD norm /app/norm

# install and configure norm apps
RUN echo 'alias norminette+="python /app/norm/codam-norminette-plus/run.py"' >> $HOME/.bashrc && \
	cd /app/norm && tar -xf norminette-external-debian-ubuntu.tar && \
	sed -i -e 's/sudo apt-get/echo "password" | sudo -S apt-get/' -e 's/\/usr\/local\/bin\/bundle/sudo \/usr\/local\/bin\/bundle/' norminette-external-debian-ubuntu/install.sh && \
	useradd -g sudo -m -p $(perl -e 'print crypt("password", "salt")') norminette && \
	export USER=norminette && \
	cd norminette-external-debian-ubuntu && sudo -u norminette ./install.sh

# move testers inside
ADD testers /app/testers

# configure testers to look at ../../libft directory
RUN bash -c "/app/testers/libft/libft-war-machine/grademe.sh"
RUN sed -i 's/PATH_LIBFT=..\//PATH_LIBFT=..\/..\/libft/' /app/testers/libft/libft-war-machine/my_config.sh && \
	bash -c "sed -i $'s/LIBFTDIR\t=\t..\/libft/LIBFTDIR\t=\t..\/..\/libft/' /app/testers/libft/libft-unit-test/Makefile"
