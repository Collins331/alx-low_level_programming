#!/bin/bash
gcc -c -Wall -pedantic -Wextra -Werror -fPIC *.c
gcc -shared -o liball.so *.o
