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

    /*! Método get que retorna o vector de strings referentes as sequencias
      @return vector de strings STR
    */
    std::vector<std::string> getSTR();

    /*! metodo que comprar o DNA passado como parametro com todos os outros DNAs do banco de dados
      @param dna passado como parametro para comparação
      @return dna do banco de dados similar ao passado como parametro
    */
    Dna Comparar_Dna(Dna dna);

    /*! Metodo que deleta o Banco_dna.
    */
    void deletarBanco();

};

#endif