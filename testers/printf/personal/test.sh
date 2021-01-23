#!/bin/bash

PROJDIR="../ft_printf"
INCLUDES="inc"
RESULTDIR="results"

CFLAGS="-Wall -Werror -Wextra -fsanitize=address"
UNAME_S=$(uname -s)
NORM=$(command -v norminette)
IWYU=$(command -v include-what-you-use)
NORMPLUS="python /app/norm/codam-norminette-plus/run.py"
MAKE_FAIL=false
MANDATORY_FAIL=false
BONUS_FAIL=false
MEMORY_FAIL=false
IWYU_FAIL=false

if [ $UNAME_S = Linux ]; then
	P='\033[35m'
	B='\033[34m'
	Y='\033[33m'
	G='\033[32m'
	R='\033[31m'
	W='\033[0m'
	DIFFDIR="${INCLUDES}/diff/linux"
elif [ $UNAME_S = Darwin ]; then
	P='\x1b[35m'
	B='\x1b[34m'
	Y='\x1b[33m'
	G='\x1b[32m'
	R='\x1b[31m'
	W='\x1b[0m'
	DIFFDIR="${INCLUDES}/diff/darwin"
else
	echo -e "unsupported OS..";
	exit 5;
fi

function cleanup {
	if [ -d ${PROJDIR} -a -f ${PROJDIR}/Makefile ]; then
		make --silent --directory=${PROJDIR} fclean &> /dev/null
	fi
	rm -f *.o
	if [ "${MANDATORY_FAIL}" = false ]; then
		rm -f run_*
	fi
	if [ "${BONUS_FAIL}" = false ]; then
		rm -f libft_bonus.out
	fi
	if [ "${MEMORY_FAIL}" = false ]; then
		rm -f run_libft* valgrind.*
	fi
	if [ "${IWYU_FAIL}" = false ]; then
		rm -f iwyu.dat
	fi
}

trap cleanup EXIT

if [ "$1" = "--projdir" ]; then
	if [ -d $2 -a -f $2/Makefile ]; then
		PROJDIR=$2
	else
		echo -e "${R}invalid --projdir $2${W}";
		exit 5
	fi
elif [ ! -d ${PROJDIR} ]; then
	echo -e "${PROJDIR}";
	echo -e "${R}invalid project directory, use --projdir /path/to/projdir/${W}";
	exit 5
elif [ -d ${PROJDIR} ]; then
	if [ ! -f ${PROJDIR}/Makefile ]; then
		echo -e "${R}no Makefile found in project directory${W}";
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
			echo -e "norminette doesn't seem to be installed correctly\nHave you copied the norminette config.conf and norminette Gemfile?";
			exit 5
		fi
	else
		echo -e "norminette doesn't seem to be installed correctly"
		read -p "Do you want manually install norminette? (y/n) " -n 1 -r
		echo
		if [[ $REPLY =~ ^[Yy]$ ]]; then
			echo -e "${G} Install norminette: ${W}";
			echo -e "1. [CONTAINER]	mkdir /usr/share/norminette";
			echo -e "2. [HOST]		cp /usr/bin/norminette ~";
			echo -e "3. [HOST]		docker cp ~/norminette <container-name>:/app/norm/norminette";
			echo -e "4. [HOST]		docker cp /usr/share/norminette/config.conf <container-name>:/usr/share/norminette/config.conf";
			echo -e "5. [HOST]		docker cp /usr/share/norminette/Gemfile <container-name>:/usr/share/norminette/Gemfile";
			exit 5
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
echo -e "                                                                  ${P} --project=ft_printf";
echo -e "                                                     ${B} --inspired by many cool students";                                                                                          
echo

echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                  NORM                  |";
echo -e "                          ---------------------------------------- ";
${NORM} --version &> /dev/null
if [ $? -eq 0 ]; then
	if [[ -z $(${NORM} $PROJDIR/**/*.c $PROJDIR/**/*.h | grep -E '^(Error|Warning)') ]]; then
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
	if [[ -z $(${NORMPLUS} $PROJDIR/**/*.c | grep -E '^(Error|Warning)') ]]; then
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
echo -e "                         |              main_general              |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_general.c -o run_main_general -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_general &> ${RESULTDIR}/your_main_general.out
	diff --suppress-common-lines -y ${RESULTDIR}/your_main_general.out ${DIFFDIR}/our_main_general.out | cat -n | grep -v -e '($' > ${RESULTDIR}/diff_main_char
	echo -e "                         ${Y}|  in ${RESULTDIR}/your_main_general.out |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                main_char               |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_char.c -o run_main_char -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_char &> ${RESULTDIR}/your_main_char.out
	echo -e "                         ${Y}|   in ${RESULTDIR}/your_main_char.out   |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                main_pct                |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_pct.c -o run_main_pct -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_pct &> ${RESULTDIR}/your_main_pct.out
	echo -e "                         ${Y}|   in ${RESULTDIR}/your_main_pct.out    |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                main_ptr                |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_ptr.c -o run_main_ptr -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_ptr &> ${RESULTDIR}/your_main_ptr.out
	echo -e "                         ${Y}|   in ${RESULTDIR}/your_main_ptr.out    |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |                main_str                |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_str.c -o run_main_str -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_str &> ${RESULTDIR}/your_main_str.out
	echo -e "                         ${Y}|   in ${RESULTDIR}/your_main_str.out    |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |             main_hexa_lower            |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_hexa_lower.c -o run_main_hexa_lower -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_hexa_lower &> ${RESULTDIR}/your_main_hexa_lower.out
	echo -e "                         ${Y}|in ${RESULTDIR}/your_main_hexa_lower.out|";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi

echo
echo -e "                         ${B} ---------------------------------------- ";
echo -e "                         |              main_unsigned             |";
echo -e "                          ---------------------------------------- ";
make --silent --directory=${PROJDIR} &> /dev/null
if [ $? -eq 0 ]; then
	gcc ${INCLUDES}/main_unsigned.c -o run_main_unsigned -L${PROJDIR} -lftprintf &> /dev/null
	./run_main_unsigned &> ${RESULTDIR}/your_main_unsigned.out
	echo -e "                         ${Y}| in ${RESULTDIR}/your_main_unsigned.out |";
	echo -e "                          ---------------------------------------- ${W}";
else
	echo -e "                         ${R}|          failed to make project        |";
	echo -e "                          ---------------------------------------- ${W}";
	MAKE_FAIL=true
	exit 5
fi