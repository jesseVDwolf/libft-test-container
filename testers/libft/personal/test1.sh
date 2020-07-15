#!/bin/bash

CFLAGS="-Wall -Werror -Wextra -fsanitize=address"
UNAME_S=$(uname -s)
NORM=$(command -v norminette)
NORMPLUS="python /app/norm/codam-norminette-plus/run.py"
PROJDIR="libft"
MANDATORY_FAIL=false
BONUS_FAIL=false
MEMORY_FAIL=false

if [ $UNAME_S = Linux ]; then
	P='\033[35m'
	B='\033[34m'
	Y='\033[33m'
	G='\033[32m'
	R='\033[31m'
	W='\033[0m'
elif [ $UNAME_S = Darwin ]; then
	P='\x1b[35m'
	B='\x1b[34m'
	Y='\x1b[33m'
	G='\x1b[32m'
	R='\x1b[31m'
	W='\x1b[0m'
fi

function cleanup {
	local exit_code=$?

	if [ -d ${PROJDIR} -a -f ${PROJDIR}/Makefile ]; then
		make --silent --directory=${PROJDIR} fclean
	fi
	rm -f *.o
	if [ "${MANDATORY_FAIL}" != true ]; then
		rm -f libft_mandatory.out
	fi
	if [ "${BONUS_FAIL}" != true ]; then
		rm -f libft_bonus.out
	fi
	if [[ $exit_code -eq 0 ]] || [[ $exit_code -eq 3 ]]
	then
		rm -f run_libft* iwyu.dat valgrind.*
	fi
}

trap cleanup EXIT

if [ "$1" = "--projdir" ]; then
	if [ -d $2 -a -f $2/Makefile ]; then
		PROJDIR=$2
	else
		echo -e "${R}invalid --projdir $2";
		exit 5
	fi
fi

# if run locally within codam network the installed
# norminette from the Dockerfile will give a TCP error.
# To prevent this, just use the norminette locally installed
${NORM} --version &> /dev/null
if [ $? -eq 1 ]; then
	if [ -f /app/norm/norminette ]; then
		/app/norm/norminette --version &> /dev/null
		if [ $? -eq 0 ]; then
			NORM="/app/norm/norminette"
		else
			echo -e "norminette doesn't seem to be installed correctly"
			read -p "Do you want manually install norminette?" -n 1 -r
			echo
			if [[ $REPLY =~ ^[Yy]$ ]]; then
				echo -e "${G} Install norminette: ${W}";
				echo -e "1. [HOST]		docker cp /usr/bin/norminette <container-name>:/app/norm/norminette";
				echo -e "2. [CONTAINER]	mkdir /usr/share/norminette";
				echo -e "3. [HOST]		docker cp /usr/share/norminette/config.conf <container-name>:/usr/share/norminette/config.conf";
				echo -e "4. [HOST]		docker cp /usr/share/norminette/Gemfile <container-name>:/usr/share/norminette/Gemfile";
				exit 5
			fi
		fi
	fi
fi

echo -e "${G}"
echo -e " _ _ _      __ _          _            _                         _        _";                 
echo -e "| (_) |    / _| |        | |          | |                       | |      (_)";                
echo -e "| |_| |__ | |_| |_ ______| |_ ___  ___| |_ ______ ___ ___  _ __ | |_ __ _ _ _ __   ___ _ __"; 
echo -e "| | | '_ \|  _| __|______| __/ _ \/ __| __|______/ __/ _ \| '_ \| __/ _\` | | '_ \ / _ \ '__|";
echo -e "| | | |_) | | | |_       | ||  __/\__ \ |_      | (_| (_) | | | | || (_| | | | | |  __/ |";   
echo -e "|_|_|_.__/|_|  \__|       \__\___||___/\__|      \___\___/|_| |_|\__\__,_|_|_| |_|\___|_| ${W}";   
echo -e "                                                                           ${Y} --jevan-de";
echo -e "                                                                      ${P} --project=libft";
echo -e "                                                     ${B} --inspired by many cool students";                                                                                          
echo

echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                  NORM                  |";
echo -e "                          ---------------------------------------- ";
${NORM} --version &> /dev/null
if [ ! -z ${NORM} -a $? -eq 0 ]; then
	if [[ -z $(${NORM} $PROJDIR/ft_*.c $PROJDIR/*.h | grep -E '^(Error|Warning)') ]]; then
		echo -e "                         ${G}|                 PASSED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	else
		echo -e "                         ${R}|                 FAILED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	fi
else
	echo -e "                         ${Y}|          norminette not found          |";
	echo -e "                          ---------------------------------------- ${W}";
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                  NORM+                 |";
echo -e "                          ---------------------------------------- ";
${NORMPLUS} --version &> /dev/null                                                                                                                                                                           
if [ $? -eq 0 ]; then
	if [[ -z $(${NORMPLUS} $PROJDIR/ft_*.c | grep -E '^(Error|Warning)') ]]; then
		echo -e "                         ${G}|                 PASSED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	else
		echo -e "                         ${R}|                 FAILED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	fi
else
	echo -e "                         ${Y}|          norminette+ not found         |";
	echo -e "                          ---------------------------------------- ${W}";
fi		

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                MANDATORY               |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc -c -I${PROJDIR} test.c
	gcc test.o -L${PROJDIR} -lft -o run_libft_mandatory
	./run_libft_mandatory &> libft_mandatory.out
	if [ -z $(cat libft_mandatory.out | grep -E '(FAILED)') ]; then
		echo -e "                         ${G}|                 PASSED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	else
		MANDATORY_FAIL=true
		echo -e "                         ${R}|                 FAILED                 |";
		echo -e "                          ---------------------------------------- ${W}";	
	fi
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                  BONUS                 |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} bonus &> /dev/null
if [ $? -eq 0 ]; then
	gcc -c -I${PROJDIR} test_bonus.c
	gcc test_bonus.o -L${PROJDIR} -lft -o run_libft_bonus
	./run_libft_bonus &> libft_bonus.out
	if [ -z $(cat libft_bonus.out | grep -E '(FAILED)') ]; then
		echo -e "                         ${G}|                 PASSED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	else
		BONUS_FAIL=true
		echo -e "                         ${R}|                 FAILED                 |";
		echo -e "                          ---------------------------------------- ${W}";
	fi
elif [ $? -eq 2 ]; then
	echo -e "                         ${P}|             no bonus found             |";
	echo -e "                          ---------------------------------------- ${W}";	
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |              MEMORY LEAKS              |";
echo -e "                          ---------------------------------------- ";
valgrind --version &> /dev/null
if [ $? -eq 0 ]; then
	valgrind --log-file=valgrind.mandatory --leak-check=full ./run_libft_mandatory &> /dev/null
	if [[ -z $(cat valgrind.mandatory | grep -E '(LEAK SUMMARY)') ]]; then
		echo -e "                         ${G}|           (mandatory) PASSED           |";
		echo -e "                          ---------------------------------------- ${W}";
	else
		MEMORY_FAIL=true
		echo -e "                         ${R}|           (mandatory) FAILED           |";
		echo -e "                          ---------------------------------------- ${W}";
	fi

	if [ -f $PWD/run_libft_bonus ]; then
		valgrind --log-file=valgrind.bonus --leak-check=full ./run_libft_bonus &> /dev/null
		if [[ -z $(cat valgrind.bonus | grep -E '(LEAK SUMMARY)') ]]; then
			echo -e "                         ${G}|             (bonus) PASSED             |";
			echo -e "                          ---------------------------------------- ${W}";
		else
			MEMORY_FAIL=true
			echo -e "                         ${R}|             (bonus) FAILED             |";
			echo -e "                          ---------------------------------------- ${W}";
		fi
	else
		echo -e "                         ${P}|             no bonus found             |";
		echo -e "                          ---------------------------------------- ${W}";
	fi
else
	echo -e "                         ${Y}|           valgrind not found           |";
	echo -e "                          ---------------------------------------- ${W}";	
fi

