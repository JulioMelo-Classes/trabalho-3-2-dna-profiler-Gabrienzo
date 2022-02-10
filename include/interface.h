#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>
#include "dna.h"

class Interface {

  public:

  void cabecalho();

  void banco_carregando(std::string nome, std::string comp);
  
  void banco_completo();

  void buscando();

  void imprimir(Dna);

  void erroEntrada();

};

#endif