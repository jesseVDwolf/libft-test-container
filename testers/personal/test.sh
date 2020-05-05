#!/bin/bash

# test 1: norminette and norminette+
# test 2: mandatory functions compiling and running tests
# test 3: bonus functions compiling and running tests
# test 4: check leaks with valgrind
# test 6: check for unnescessary headers

set -o errexit

GREEN="\e[1;32m"
NORMAL="\e[0m"
RED="\e[1;31m"
BLUE="\e[1;34m"

CFLAGS="-Wall -Werror -Wextra"

norminetteplus="python $HOME/codam-norminette-plus/run.py"

PROJDIR="libft"

while getopts ":d:" opt; do
	case $opt in
		d)	PROJDIR="$OPTARG"
		;;
		\?)	echo -e "$RED Invalid option -$OPTARG" >&2;
		;;
	esac
done

function cleanup {
	local exit_code=$?

	echo -e "\n$BLUE [6.0/6] cleaning up... $NORMAL"
	make -C $PROJDIR fclean
	rm *.o
	if [[ $exit_code -eq 0 ]] || [[ $exit_code -eq 3 ]]
	then
		rm -f run_libft* iwyu.dat valgrind.*
	fi
}

trap cleanup EXIT

echo -e "$BLUE [0.0/6] cleaning project dir... $NORMAL"
make -C $PROJDIR fclean

echo -e "\n$BLUE [1.0/6] CODAM NORM"
echo -e "$BLUE [1.1/6] running norminette... $NORMAL"
if [ $(command -v norminette) ]
then
	if [[ -z $(norminette -R CheckForbiddenSourceHeader $PROJDIR/ft_*.c $PROJDIR/*.h | grep -E '^(Error|Warning)') ]]
	then
		echo -e "$GREEN [1.1/6] passed\n"
	else
		echo -e "$RED [1.1/6] FAILED\n"
		exit 5
	fi
else
	echo -e "$NORMAL [1.1/6] No norminette program found"
fi

echo -e "$BLUE [1.2/6] running norminette+... $NORMAL"
if [ $($norminetteplus --version) ]
then
	if [[ -z $($norminetteplus $PROJDIR/ft_*.c | grep -E '^(Error|Warning)') ]]
	then
		echo -e "$GREEN [1.2/6] passed\n"
	else
		echo -e "$RED [1.2/6] FAILED\n"
		exit 5
	fi
else
	echo -e "$NORMAL [1.2/6] No norminette+ program found"
fi

echo -e "$BLUE [2.0/6] MANDATORY FUNCTIONS"
echo -e "$BLUE [2.1/6] compiling mandatory functions using project makefile... $RED"
make -C $PROJDIR
echo -e "$GREEN [2.1/6] successfully compiled \n"
echo -e "$BLUE [2.2/6] running tests on mandatory functions... $RED"
gcc -c -I$PROJDIR test.c
gcc test.o -L$PROJDIR -lft -o run_libft_mandatory
if [ -z $(./run_libft_mandatory | grep -E '(FAILED)') ]
then
	./run_libft_mandatory &> /dev/null
	echo -e "$GREEN [2.2/6] passed\n"
else
	echo -e "$RED [2.2/6] FAILED $NORMAL"
	./run_libft_mandatory | grep -E -C 8 '(FAILED)'
	exit 5
fi

echo -e "$BLUE [3.0/6] BONUS FUNCTIONS"
if [[ $(find $PROJDIR/ -name "ft_lst*.c" | wc -l) -eq 9 ]]
then
	echo -e "$BLUE [3.1/6] bonus found, compiling using project makefile: $RED"
	make -C $PROJDIR bonus
	echo -e "$GREEN [3.1/6] passed\n"

	echo -e "$BLUE [3.2/6] running tests on bonus functions... $RED"
	gcc -c -I$PROJDIR test_bonus.c
	gcc test_bonus.o -L$PROJDIR -lft -o run_libft_bonus

	if [ -z $(./run_libft_bonus | grep -E '(FAILED)') ]
	then
		./run_libft_bonus &> /dev/null
		echo -e "$GREEN [3.2/6] passed\n"
	else
		echo -e "$RED [3.2/6] FAILED $NORMAL"
		./run_libft_bonus | grep -E -C 8 '(FAILED)'
		exit 5
	fi
else
	echo -e "$NORMAL [3.0/6] no bonus functions found\n"	
fi

echo -e "$BLUE [4.0/6] MEMORY LEAKS"
if [ $(command -v valgrind) ]
then
	echo -e "$BLUE [4.1/6] checking mandatory functions"
	valgrind --log-file=valgrind.mandatory --leak-check=full ./run_libft_mandatory &> /dev/null

	if [[ -z $(cat valgrind.mandatory | grep -E '(LEAK SUMMARY)') ]]
	then
		echo -e "$GREEN [4.1/6] passed\n"
	else
		echo -e "$RED [4.1/6] FAILED"
		cat valgrind.mandatory | grep -E -C 8 '(LEAK SUMMARY)'
		exit 5
	fi
	
	echo -e "$BLUE [4.2/6] checking bonus functions"
	valgrind --log-file=valgrind.bonus --leak-check=full ./run_libft_bonus &> /dev/null

	if [[ -z $(cat valgrind.bonus | grep -E '(LEAK SUMMARY)') ]]
	then
		echo -e "$GREEN [4.2/6] passed\n"
	else
		echo -e "$RED [4.2/6] FAILED"
		cat valgrind.bonus | grep -E -C 8 '(LEAK SUMMARY)'
		exit 5
	fi
else
	echo -e "$NORMAL valgrind program not found\n"
fi

echo -e "$BLUE [5.0/6] UNNESCESSARY INCLUDES"
make -C $PROJDIR fclean
if [ $(command -v include-what-you-use) ]
then
	if [[ $(make -C $PROJDIR -k CC=/home/ubu-admin/iwyu/build/bin/include-what-you-use 2> iwyu.dat) ]]
	then
		if [[ -z $(cat iwyu.dat | grep -E '(add|remove)') ]]
		then
			echo -e "$GREEN [5.0/6] passed"
		else
			echo -e "$RED [5.0/6] FAILED $NORMAL"
			cat iwyu | grep -E -C 2 '(add|remove)'
			exit 5
		fi
	fi
else
	echo -e "$NORMAL include-what-you-use program not found"
fi

