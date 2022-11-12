
# Ferramenta de ajuda para trabalhar com classes em c++ no termux

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
$ cd IDE_termux_cpp
```
**para criar um novo projeto:**
```bash
$ new_p [nome do projeto]
$ cd [nome do projeto]
```
`obs` : para a criação do novo projeto você deve está no diretório: `~/IDE_termux_cpp`

**para criar uma classe:**

Primeiramente acesse o arquivo `name_class.txt`:
```bash
$ vim name_class.txt
```
Neste arquivo serão colocados os nomes das classes que serão  criadas, cada linha corresponde a uma classe. 

**forma de preenchimento do arquivo name_class.txt:**
<ul>
    <li> no inicio de cada linha informe o numero correspondente da linha, começando do zero</li>
    <li> na mesma linha, de um espaço e coloque o nome da classe (recomendado com a primeira letra maiuscula) </li>
    <li> reproduza o mesmo procedimento acima para outras classes que você dejesar adicionar</li>
</ul>

**proximo passo**

adicionar um vetor classes no bash baseado nas mesmas classes adicionadas no arquivo `name_class.txt` atraves do comando abaixo:

```bash
$ classes=('[nome_class_1]' '[nome_class_2]' ... '[nome_class_n]')
```
Para que a(s) classe(s) seja(m) efetivamente criada(s) basta executar o seguinte comando:
```bash
$ new_c "${classes[@]}"
```
`obs`: para a criação de uma nova classe você deve está no diretorio: `~/IDE_termux_cpp/[nome do projeto]`

**construir e executar:**
```bash 
$ build_run [nome do projeto] [nome da classe]
```
`obs`: você só pode executar este comando no diretorio: `~/IDE_termux_cpp/[nome do projeto]`


