#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H

#include "dna.h"
#include <iostream>
#include <vector>

// BancoDeDados concentra todas as operações realizadas com o banco de DNA [data.csv] para acesso e comparação de dados
class BancoDeDados {
  
  private:
    std::vector<Dna*> Banco_Dna;
    std::vector<std::string> STR;

  public:

    /*! Realiza o carremento das palavras que está dentro do arquivo e as formata alocando seu valores em suas devidas variaveis
      @param nomeArq ponteiro que indica o nome do arquivo a ser lido
    */
    void Carregar_Banco_DNA(std::string nomeArq);

    std::vector<std::string> getSTR();
    

};

#endif