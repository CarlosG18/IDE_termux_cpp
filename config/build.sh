#!/usr/bin/env bash

cd setup
cd obj
clang++ ../../sources/$2.cpp -c
clang++ ../../sources/main.cpp -c
cd ..
cd execs
clang++ ../obj/main.o ../obj/$2.o -o $1
./$1
                                        
