#ifndef DNA_H
#define DNA_H

#include <iostream>

class Dna {

  private:
    std::string nome;
    int str_AGAT; //#1
    int str_AATG; //#2
    int str_TATC; //#3

  public:

    Dna(std::string nome, int str_AGAT, int str_AATG, int str_TATC);
    std::string getNome();

};

#endif