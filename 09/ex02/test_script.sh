#!/bin/bash

valgrind_file="valgrind_logs.txt"
stdout_file="stdout_logs.txt"

> "$valgrind_file"
> "$stdout_file"

for i in $(seq 1 100); do
    echo "=== Run $i ===" >> "$valgrind_file"
    echo "=== Run $i ===" >> "$stdout_file"
    
    numbers=$(shuf -i 0-10000 -n 1000 | tr "\n" " ")
    
    # Lance le programme : stdout dans stdout_file, valgrind dans tmp
    valgrind --log-file="tmp_valgrind.log" ./PmergeMe $numbers >> "$stdout_file" 2>&1
    
    cat tmp_valgrind.log >> "$valgrind_file"
    echo "" >> "$valgrind_file"
done

rm tmp_valgrind.log

echo "Tests terminés. Logs Valgrind : $valgrind_file, sortie standard : $stdout_file"