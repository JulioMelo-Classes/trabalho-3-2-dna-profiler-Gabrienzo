#ifndef SEQUENCIA_H
#define SEQUENCIA_H

#include <iostream>
#include <vector>

class Sequencia {

  private:
    std::string Dna_seq;
    int aux_AGAT;
    int aux_AATG;
    int aux_TATC;
    std::vector<int> ordem;

  public:

    void Carregar_Banco_Sequencia(std::string nomeArq, std::string comparador);

    void setDna_seq(std::string Dna_seq);

    std::string getDna_seq();

};

#endif