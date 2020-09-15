# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    basic_test.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wquinoa <wquinoa@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/11 21:32:56 by wquinoa           #+#    #+#              #
#    Updated: 2020/09/12 02:02:39 by wquinoa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

OK="[\033[32mOK\033[0m]"
KO="[\033[31mKO\033[0m]"
FUNCTIONS="no_args  no_file  few_args  empty_s1_s2  easy  greedy"

no_args(){
	printf "\n%32s\n" "-- Invalid tests --"
	printf "%-32s" "No args: "
	VAR=`./$1 2>&1 | wc -c | sed "s/ //g"`
	if [[ -z "$VAR" ]]
	then
		echo $KO && echo "no args test: created a .replace file or output in STDOUT instead of STDERR" >> trace.txt
	else
		echo $OK
	fi
}

no_file(){
	printf "%-32s" "Non-existent file: "
	VAR=""
	VAR=`./"$1" toto.txt lol kek 2>&1 | wc -c | sed "s/ //g"`
	if [[ ! -f "toto.txt.replace" && -n "$VAR" ]]
	then
		echo $OK
	else
		echo $KO && echo "bad filename test: created a .replace file or output in STDOUT instead of STDERR" >> trace.txt
	fi
}

few_args(){
	printf "%-32s" "Too few args: "
	VAR=""
	VAR=`./$1 test.txt 2>&1 | wc -c | sed "s/ //g"`
	if [[ ! -f "test.txt.replace" && -n "$VAR" ]]
	then
		echo $OK
	else
		echo $KO && echo "invalid amount of args: created a .replace file or output in STDOUT instead of STDERR" >> trace.txt
	fi
}

empty_s1_s2(){
	printf "%-32s" "Empty s1 or s2: "
	VAR=`./$1 test.txt "" TEST 2>&1 | wc -c | sed "s/ //g"`
	if [[ ! -f "test.txt.replace" && -n "$VAR" ]]
	then
		printf "[\033[32mOK\033[0m]"
	else
		printf "[\033[31mKO\033[0m]" && echo "empty s1: created a .replace file or output in STDOUT instead of STDERR" >> trace.txt
	fi
	echo lol > test.txt
	VAR=`./$1 test.txt lol "" 2>&1 | wc -c | sed "s/ //g"`
	if [[ -f "test.txt.replace" && -n "$VAR" ]]
	then
		echo $OK
	else
		echo $KO && echo "empty s2: you should replace s1 with an empty sting" >> trace.txt
	fi
}

easy(){
	printf "\n%32s\n"  "-- Normal tests --"
	ls -l /bin/ > easy.txt
	printf "%-32s" "./$1 easy.txt root NEWWORD: "
	./$1 easy.txt root NEWWORD
	VAR=`grep root < easy.txt.replace `
	if [[ -z "$VAR" ]]
	then
		printf "[\033[32mOK\033[0m]"
	else
		printf "[\033[31mKO\033[0m]" && echo "easy: found s1 in .replace file" >> trace.txt
	fi
	WC1=`wc -w < easy.txt`
	WC2=`wc -w < easy.txt.replace`
	if [ "$WC1" != "$WC2" ]
	then
		echo $KO &&  echo "easy: the amount of lines doesn't match" >> trace.txt
	else
		echo $OK
	fi
	rm easy.txt easy.txt.replace
}

greedy(){
	printf "\n%32s\n" "-- Greed tests --"
	echo > test.txt
	for i in {0..255}
	do
		/bin/echo -n 's1 ' >> test.txt;
	done
	echo >> test.txt
	printf "%-32s" "./$1 test.txt s1 s2: "
	./$1 test.txt s1 s2
	VAR=`grep s1 < test.txt.replace `
	if [[ -z "$VAR" ]]
	then
		printf "[\033[32mOK\033[0m]"
	else
		printf "[\033[31mKO\033[0m]" && echo "greedy: should replace all occurences of s1" >> trace.txt
	fi
	WC1=`wc -c < test.txt`
	WC2=`wc -c < test.txt.replace`
	if [ "$WC1" != "$WC2" ]
	then
		echo $KO
	else
		echo $OK
	fi
	rm test.txt test.txt.replace
}


if [[ -n $1 ]]
then
	echo > test.txt
	for f in $FUNCTIONS
	do
		$f $1
	done
	echo
else
	echo "usage: ./basic_test.sh [executable name]"
fi
