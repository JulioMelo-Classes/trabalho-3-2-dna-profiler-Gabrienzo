#ifndef DNA_H
#define DNA_H

#include <iostream>
#include <vector>

class Dna {

  private:
    std::string nome;
    std::vector<std::pair<std::string, int>> sequencias_dna;

  public:

    /*! Construtor da classe Dna
    @param nome da pessoa na qual se deseja criar o cadastro no banco de Dna
    */
    Dna(std::string nome);

    /*! Metodo get que retorna o valor da string nome
      @return string contendo o nome
    */
    std::string getNome();

    /*! Metodo set que seta o vector de pair que contem as sequencias e a quantidade de sequencias
      @param sequencia vector de pair <nome_sequencia, maior quantidade de apariçoes>
    */
    void setSTR(std::pair<std::string, int> sequencia);

    /*! Metodo set para setar o nome do DNA
      @param nome nome do DNA.
    */
    void setNome(std::string nome);

    /*! Metodo set que seta a quantidade de STRs na maior sequencia de um STR especifico do DNA.
      @param j posição do STR.
      @param quantidade quantidade de STRs na maior sequencia.
    */
    void setQtd(int j, int quantidade);

    /*! Metodo get que retorna o valor da maior sequencia de um STR especifico do DNA.
      @param posicao posição do STR que voce quer o valor
      @return o valor da maior sequencia desse STR.
    */
    int getValorSeq(int posicao);

    /*! Metodo get que retorna o tamanho do vector de sequencia_dna.
      @return tamanho do vector de sequencia_dna.
    */
    int getTamSeq();

    /*! Metodo get que retorna o STR de uma posição especifica.
      @param i posição do vector STR
      @return o STR daquela posição.
    */
    std::string getSTR(int i);

};

#endif