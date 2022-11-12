#!/usr/bin/env bash

classes=("$@")

ct=""

cd setup
cd obj
for cl in "${classes[@]}";
do
clang++ ../../sources/$cl.cpp -c
done
clang++ ../../sources/main.cpp -c

for cls in "${classes[@]}";
do
ct+=" ${cls}.o "
done
