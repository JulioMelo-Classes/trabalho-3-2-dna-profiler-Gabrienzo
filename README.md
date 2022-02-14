# Projeto 3.2 - Linguaguem de Programação
Repositório contendo as especificações do Trabalho 3.2 da disciplina de LP1, funcionalidades e executaveis.
especificações dos autores do codigo em [author.md](author.md)

***

# Documento de Especificação
Leia o documento de especificação contido em [README trabalho 3.2 JulioMelo](https://github.com/JulioMelo-Classes/LP1-2021.2-DNAProfiler/blob/master/README.md).

***

## Como compilar o projeto;
Cmake (Criando, entrando e buildando os arquivos da pasta build):
```console
mkdir build
cd build
cmake ..
cmake --build .
```

***

## Como executar o projeto;
Comandos para dar inicio ao programa:
```console
cd build
./dna_profiler -d <arquivo_com_o_banco_de_dados.txt> -s <sequencia_especifica_a_ser_lida.txt>
 ou
 ./dna_profiler -s <sequencia_especifica_a_ser_lida.txt> -d <arquivo_com_o_banco_de_dados.txt>
```
-d é um indicador para o arquivo de dados.
-s é um indicador para o arquivo com a sequencia.
A ordem deles podem ser alterados.

***
  
## Como executar o conjunto dos testes planejados.
Deixamos alguns comandos basicos prefeitos em [script.txt](/data/script.txt)
Dessa forma basta copiar os comandos e testar-los no console, cada um apresenta uma condição especifica do programa: 3 dnas diferentes para serem lidos, 1 no match, 2 erros de entrada e 1 troca de indicadores.
