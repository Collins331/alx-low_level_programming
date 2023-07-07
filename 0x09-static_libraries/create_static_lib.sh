#!/bin/bash
gcc -c -Wall -Wextra -Werror *.c
ar rc liball.a *.o
ranlib liball.a
