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

    /*! carrega a sequencia especifica selecionada pelo usuario dentro da classe Sequencia.
      @param nomeArq nome do arquivo contendo a sequencia.
    */
    void Carregar_Banco_Sequencia(std::string nomeArq);

    void setDna_seq(std::string Dna_seq);

    /*! solicita a sequencia de dna dentro de sequencia.
      @return a sequencia de dna (Dna_seq).
    */
    std::string getDna_seq();

};

#endif