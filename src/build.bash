#!/bin/bash

CFLAGS="-std=c99 -Wall -Wextra -pedantic -Werror -Wmissing-declarations";
SRC="main.c prime_numbers.c"
OUTPUT="program"

if [[ $1 == "debug" ]]; then
    CFLAGS="$CFLAGS -g"
elif [[ $1 == "optimize" ]]; then
    CFLAGS="$CFLAGS -O3"
fi


CMD="gcc $CFLAGS $SRC -o $OUTPUT"

echo "[INFO]: $CMD"
$CMD 
