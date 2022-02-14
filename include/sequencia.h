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

    /*! Metodo set que seta a sequencia de Dna especifica dentro de Sequencia.
      @param Dna_seq a sequencia especifica de Dna.
    */
    void setDna_seq(std::string Dna_seq);

    /*! solicita a sequencia de dna dentro de sequencia.
      @return a sequencia de dna (Dna_seq).
    */
    std::string getDna_seq();

    /*! Metodo set que insere um STR dentro do vector STR_seq..
      @param Str o STR a ser inserido.
    */
    void setSTR(std::string Str);

    /*! Metodo que realiza a procura das maiores sequencias de STR dentro da sequencia de dna, preenchendo o vector ordem.
    */
    void procurar();

    /*! Metodo que le o vector ordem e cria um DNA baseado nas maiores sequencias de STR contidos em ordem, para em seguida enviar ao banco para realizar as comparações.
      @return Dna para comparação.
    */
    Dna ler_ordem();

    /*! Metodo get que retorna o vector ordem.
      @return Vector ordem.
    */
    std::vector<int> getOrdem();

};

#endif