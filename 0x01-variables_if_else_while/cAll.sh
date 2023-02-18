#!bin/bash

for file in *.c; do
    if [[ -f "$file" ]]; then
        echo "Compiling $file ..."
        gcc -Wall -pedantic -Werror -Wextra -std=gnu89 "$file" -o "${file%.c}"
    fi
done
