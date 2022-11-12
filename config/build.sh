#!/usr/bin/env bash

classes=("$@")

cd setup
cd obj
for cl in "${classes[@]}";
do
clang++ ../../sources/$cl.cpp -c
mv ./$cl.o ../../sources
done
clang++ ../../sources/main.cpp -c
mv ./main.o ../../sources
