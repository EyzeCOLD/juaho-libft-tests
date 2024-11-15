#!/bin/bash
INC_PATH="../libft/"
LIB_PATH="../libft/libft.a"
SRC=$1
SUFFIX=".c"
OUTPUT=${SRC%"$SUFFIX"}
OUTPUT+=.out
cc -Wall -Wextra -Werror $1 $LIB_PATH -I"$INC_PATH" -lbsd -o $OUTPUT
echo "- $OUTPUT created!"
