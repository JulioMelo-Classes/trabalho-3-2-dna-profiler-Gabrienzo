#ifndef DNA_H
#define DNA_H

#include <iostream>
#include <vector>

class Dna {

  private:
    std::string nome;
    std::vector<std::pair<std::string, int>> sequencias_dna;

  public:

    Dna(std::string nome);
    std::string getNome();
    void setSTR(std::pair<std::string, int> sequencia);
    void setNome(std::string nome);
    void setQtd(int j, int quantidade);

    int getValorSeq(int posicao);
    int getTamSeq();
    std::string getSTR(int i);

};

#endif