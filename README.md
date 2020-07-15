# Libft-test-container

A container with external testers and personal tests for the following projects:

## Libft
| Test              | Notes                                                                       | Link                                        |
|-------------------|-----------------------------------------------------------------------------|---------------------------------------------|
| libft-unit-test   | Requires "so" makefile rule. On WSL -Werror gcc flag fails tester functions. | https://github.com/alelievr/libft-unit-test |
| libft-war-machine | Run with "bash grademe.sh"                                                  | https://github.com/ska42/libft-war-machine  |
| personal          | Personalized tests made during own development process                      | -                                           |

### **libft-unit-test adding "rule"**
Add the following to your makefile:
```
so: $(NAME:.a=.so)

$(NAME:.a=.so): $(SRC_O) $(BONUS_O)
	$(CC) -shared -o $@ $^
```

## Get-next-line
