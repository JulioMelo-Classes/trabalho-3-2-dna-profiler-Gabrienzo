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
Dessa forma basta copiar os comandos e testar-los no console, cada um apresenta uma condição especifica do programa: 3 dnas diferentes para serem lidos, 1 no match, 2 erros de entrada e 1 troca de indicadores. Alem disso tem um arquivo extra de data com 4 STRs e duas sequencias adicionais para serem testadas.

# Avaliação

1. Ler e validar os argumentos da linha de comando | 10 / 10
- Legal a forma de validação

2. Ler e validar os dados da base de dados e armazená-los em uma classe apropriada | 8 / 10
- Não foi validado

3. Separar a interface textual das demais classes do sistema concentrando os couts e cins em um único objeto | 10 / 10

4. Implementação de uma classe para armazenar e validar o DNA de um indivíduo bem como realizar as operações de perfil | 5 / 10
- Vou considerar metade pelo erro no algoritmo, como conversamos.

5. Implementação eficiente através do uso de referencias, quando você  julgar necessário | 5 / 10
- Nesse caso, um ponto crucial para retornar/usar referencias era em "Comparar_Dna" uma vez que o método tanto retorna um objeto (que deveria ser uma referencia),
quanto recebe um objeto como argumento(que também deveria ser uma referencia).

## Demais quesitos (Critério | Peso)

1. Organização do código em src, include, data | 5 / 5

2. Documentação do código usando o padrão doxygen | 3 / 5
- faltou documentar os atributos

3. Implementação e documentação de arquivos de teste | 10 / 15
- Faltou documentar a execução dos casos de testes