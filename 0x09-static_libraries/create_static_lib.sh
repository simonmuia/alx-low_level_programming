#!/bin/bash
gcc -Wall -pendantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
