

# G18 - IDE termux for C++

A simple "IDE" for the terminal (termux) to work with object-oriented programming in c++


## Instalação

**1° passo**
: fazer o clone do repositório

```bash
  $ git clone git@github.com:CarlosG18/IDE_termux_cpp.git
```
**2° passo** 
: editar o arquivo .bash_aliases com qualquer editor de código ou pelos editores do terminal como o `vim` ou o `nano`. 

*ultilizando o vim*
```bash
$ vim ~/.bash_aliases
```
**3° passo**
: colocar os seguintes comandos
```bash
alias new_p='./config/new_project.sh'
alias new_c='../config/new_class.sh'
alias build_run='../config/build.sh'
```
Após isso salve o arquivo e execute o comando abaixo:
```bash
$ source ~/.bash_aliases
```
**4° passo** 
: instalação do compilador `clang`
```bash 
$ pkg update && pkg upgrade
$ pkg install clang
```

## Uso/Exemplos

Acessando o repositório
```bash
$ cd g18_ide
```
**para criar um novo projeto:**
```bash
$ new_p [nome do projeto]
$ cd [nome do projeto]
```
`obs` : para a criação do novo projeto você deve está no diretório: `~/g18_ide`

**para criar uma classe:**
```bash
$ new_c [nome da classe]
```
`obs`: para a criação de uma nova classe você deve está no diretorio: `~/g18_ide/[nome do projeto]`

**construir e executar:**
```bash 
$ build_run [nome do projeto] [nome da classe]
```
`obs`: você só pode executar este comando no diretorio: `~/g18_ide/[nome do projeto]`

Com isso você está apto a desenvolver em c++ pelo termux.

