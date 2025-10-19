#!/bin/bash
set -e

g++ -std=c++17 -O2 test.cpp -o main
g++ -std=c++17 -O2 brute.cpp -o brute
g++ -std=c++17 -O2 gen.cpp -o gen

MAX_ITER=1000
# optional: change max n and max value passed to generator
MAX_N=25        # maximum n generator can pick (it will only pick odd n)
MAX_VALUE=100  # values will be distinct integers from 0..MAX_VALUE

for ((i=1; i<=MAX_ITER; i++)); do
    ./gen $i $MAX_N $MAX_VALUE > in.txt
    ./main < in.txt > out1.txt
    ./brute < in.txt > out2.txt

    if ! diff -w out1.txt out2.txt > /dev/null ; then
        echo "❌ Wrong Answer on test $i"
        echo "Seed (i) used for generator: $i"
        echo "Input:"
        cat in.txt
        echo "Main output:"
        cat out1.txt
        echo "Brute output:"
        cat out2.txt
        exit 0
    fi
    echo "✅ Passed test $i"
done

echo "Completed $MAX_ITER tests, no mismatch found."
