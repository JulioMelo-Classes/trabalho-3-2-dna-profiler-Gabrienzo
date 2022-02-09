#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include "dna.h"

class Interface {

  public:

  void cabecalho();

  void banco_carregando(std::string nomeBanco, std::string nomeSeq);
  
  void banco_completo();

  void buscando();

  void imprimir(Dna);

};

#endif