#!/bin/bash

make

for i in test-*.txt; do
	output="test-${i##*-}"
	./mean < <(cat "$i") > "$output"
done
