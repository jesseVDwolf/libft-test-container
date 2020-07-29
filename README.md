# Libft-test-container

A container with external testers and personal tests. It also includes the norminette, [norminetteplus](https://github.com/thijsdejong/codam-norminette-plus), valgrind and [include-what-you-use](https://github.com/include-what-you-use/include-what-you-use/tree/clang_9.0) to check for additional errors. Also, vim and emacs
have also already been preinstalled.
> :warning: **Import note: this tester uses git submodules. Make sure to clone this repository with --recurse-submodules so that all external testers are also retrieved successfully. Also, some external testers may still have to be configured. Look at these testers their own configurations using the links provided in this README**

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

### **Libft** :heavy_check_mark:
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

### **get-next-line** :heavy_check_mark:
| Test          | Notes                                 | Link                                          |
|---------------|---------------------------------------|-----------------------------------------------|
| gnl_unit_test | Edit "run_tests.sh" PATH_GNL variable | https://github.com/jesseVDwolf/gnl_unit_tests |

### **ft_printf** :hammer_and_wrench:
| Test     | Notes                                                  | Link                                  |
|----------|--------------------------------------------------------|---------------------------------------|
| PFT_2019 | Edit the "options-config.ini" LIBFTPRINTF_DIR variable | https://github.com/cclaude42/PFT_2019 |
| Personal | -- Under construction --                               | -                                     |