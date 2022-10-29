#!/usr/bin/env bash                         

cd setup
cd base_files
./exe_in_out
mv class.h $1.h
mv class.cpp $1.cpp
cp $1.h ../../sources
cp $1.cpp ../../sources
rm $1.h 
rm $1.cpp
cd ..

echo "class $1 criada!"
