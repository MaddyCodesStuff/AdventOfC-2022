#!/sbin/bash

#-fsanitize=address
gcc -o out day3.c -Wall -pedantic -fsanitize=address
./out
