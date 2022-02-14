#ifndef SEQUENCIA_H
#define SEQUENCIA_H

#include "dna.h"

#include <iostream>
#include <vector>

class Sequencia {

  private:
    std::string Dna_seq;
    std::vector<std::string> STR_seq;
    std::vector<int> ordem;

  public:

    /*! carrega a sequencia especifica selecionada pelo usuario dentro da classe Sequencia.
      @param nomeArq nome do arquivo contendo a sequencia.
    */
    void Carregar_Banco_Sequencia(std::string nomeArq);

    void setDna_seq(std::string Dna_seq);

    /*! solicita a sequencia de dna dentro de sequencia.
      @return a sequencia de dna (Dna_seq).
    */
    std::string getDna_seq();

    void setSTR(std::string Str);

    void procurar();

    Dna ler_ordem();

    std::vector<int> getOrdem();

};

#endif