#! /bin/bash

define_colors()
{
    RED='\033[0;31m'
    GREEN='\033[0;32m'
    NC='\033[0m'
}

make re

user_output="user_output.txt"

if [ ! -f a.out ]
then
    echo "Makefile failed"
    exit 1
fi

echo "Testing with literal characters" >> $user_output

./a.out 'e' > $user_output

./a.out 'l' >> $user_output

./a.out 'o' >> $user_output

./a.out 'H' >> $user_output

./a.out 'W' >> $user_output

./a.out '{' >> $user_output

./a.out ' ' >> $user_output

echo "Testing with literal integer" >> $user_output

./a.out 0 | cat -e >> $user_output

./a.out -42 | cat -e >> $user_output

./a.out 42 | cat -e >> $user_output

echo "Testing with literal float" >> $user_output

./a.out 0.0f | cat -e >> $user_output

./a.out -42.42f | cat -e >> $user_output

./a.out 42.42f | cat -e >> $user_output

./a.out +inff | cat -e >> $user_output

./a.out -inff | cat -e >> $user_output

./a.out nanf | cat -e >> $user_output

echo "Testing with literal double" >> $user_output
2
./a.out 0.0 | cat -e >> $user_output

./a.out -42.42 | cat -e >> $user_output

./a.out 42.42 | cat -e >> $user_output

./a.out +inf | cat -e >> $user_output

./a.out -inf | cat -e >> $user_output

./a.out nan | cat -e >> $user_output

echo "Testing with empty string" >> $user_output

./a.out "" | cat -e >> $user_output

echo "Testing with no arguments" >> $user_output

./a.out | cat -e >> $user_output

echo "Testing with 1 argument" >> $user_output

./a.out "Hello" | cat -e >> $user_output

echo "Testing with 2 arguments" >> $user_output

./a.out "Hello" "World" | cat -e >> $user_output

make fclean

# tester by everonel

