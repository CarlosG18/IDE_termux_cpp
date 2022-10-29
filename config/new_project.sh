#!/usr/bin/env bash      

[[ $# -ne 1 ]] && echo "Digite o nome de apenas um arquivo! Saindo..." &&               exit 1
[[ -f $1 ]] && echo "arquivo ja existe! saindo..." && exit 1                           

mkdir $1 
cd $1
touch name_class.txt
mkdir sources
mkdir setup
cd setup
mkdir obj
mkdir execs
mkdir base_files
cd ..
cd ..
cd config
cp main.cpp ../$1/sources
cp exe_in_out ../$1/setup/base_files

echo "projeto $1 criado com sucesso!"
