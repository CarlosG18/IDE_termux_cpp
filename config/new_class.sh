#!/usr/bin/env bash                         

classes=("$@");

for cl in "${classes[@]}";
do
cd setup
cd base_files
./exe_in_out
cp $cl.h ../../sources
cp $cl.cpp ../../sources
rm $cl.h 
rm $cl.cpp
cd ..
cd ..

echo "class $cl criada!"
done
