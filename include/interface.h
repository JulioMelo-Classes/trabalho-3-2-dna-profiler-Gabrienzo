#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include "dna.h"

// Interface concentra todas as mensagens que são impressas para o usuario na tela, assim como a impressão dos resultados.
class Interface {

  public:

  /*! imprime o cabeçalho inicial do programa.
  */
  void cabecalho();

  /*! imprime a mensagem avisando que o banco de dados e a sequencia estão sendo carregados.
    @param nome do arquivo sendo carregado
    @param comp indica se é o banco ou a sequencia.
  */  
  void banco_carregando(std::string nome, std::string comp);
  
  /*! imprime a mensagem que indica que o banco de dados foi carregado.
  */
  void banco_completo();

  /*! imprime a mensagem indicando que a busca foi iniciada.
  */
  void buscando();

  /*! imprime o resultado da busca.
    @param Dna dna a ser impresso.
  */
  void imprimir(Dna);

  /*! imprime a mensagem indicando um erro de entrada.
  */
  void erroEntrada();

};

#endif