# Libft-test-container

A container with external testers and personal tests. It also includes the norminette, [norminetteplus](https://github.com/thijsdejong/codam-norminette-plus), valgrind and [include-what-you-use](https://github.com/include-what-you-use/include-what-you-use/tree/clang_9.0) to check for additional errors.
> :warning: **Import note: this tester uses git submodules. Make sure to clone this repository with --recurse-submodules so that all external testers are also retrieved successfully**

Easiest way to install it is to pull it directly from [docker.io](https://hub.docker.com/r/jessevdwolf/libft-test-container):
```bash
> docker pull jessevdwolf/libft-test-container
```

## Usage
Build the image (Make sure you are in the same directory as the Dockerfile):
```bash
> docker build -t libft-test-container .
```

After building the image, you can just start the container with:
```bash
> docker run -it --rm libft-test-container bash
```
some manual configuration will have to be done to make sure
you can clone repos from the vogsphere into the container. OpenSSH-server has already been
installed. All that has to be done is to set up your SSH keys correctly. 

Keep the terminal with the running container open and open a new one.
Then copy your private key from your local computer into the container (this must be done from outside of the container):
```bash
> docker cp /path/to/ssh-private-key <container-name>:/root/.ssh/id_rsa
```

After that has been done you can go back to your previous terminal and checkout the preconfigured
testers that are available. They can be found in */app/testers/\<project>*

## Projects

### **Libft**
| Test              | Notes                                                                       | Link                                        |
|-------------------|-----------------------------------------------------------------------------|---------------------------------------------|
| libft-unit-test   | Requires "so" makefile rule. On WSL -Werror gcc flag fails tester functions. | https://github.com/alelievr/libft-unit-test |
| libft-war-machine | Run with "bash grademe.sh"                                                  | https://github.com/ska42/libft-war-machine  |
| personal          | Personalized tests made during own development process                      | -                                           |

### *libft-unit-test adding "rule"*
Add the following to your makefile:
```
so: $(NAME:.a=.so)

$(NAME:.a=.so): $(SRC_O) $(BONUS_O)
	$(CC) -shared -o $@ $^
```

### **Get-next-line**
