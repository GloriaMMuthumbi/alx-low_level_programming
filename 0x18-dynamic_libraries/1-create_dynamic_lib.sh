#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC -o liball.so *.c
if [ $? -eq 0 ]; then
	echo "success"
else
	echo "failed"
fi
