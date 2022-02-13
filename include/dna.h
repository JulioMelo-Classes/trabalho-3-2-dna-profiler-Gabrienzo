#ifndef DNA_H
#define DNA_H

#include <iostream>

class Dna {

  private:
    std::string nome;
    std::vector<std::pair<std::string, int>> sequencias_dna;

  public:

    Dna(std::string nome, int str_AGAT, int str_AATG, int str_TATC);
    std::string getNome();

};

#endif