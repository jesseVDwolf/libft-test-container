FROM ubuntu:18.04

# install main utils
RUN apt-get update && \
	apt-get install -y \
		wget \
		build-essential \
		git \
		clang-9 \
		libclang-9-dev \
		cmake

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
 
