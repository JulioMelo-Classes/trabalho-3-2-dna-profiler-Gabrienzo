#include "../include/sequencia.h"

#include <fstream>
#include <sstream>

using namespace std;

void Sequencia::Carregar_Banco_Sequencia(string nomeArq){
  fstream arquivo;
  
  string linha;
  string pasta_local = "../data/" + nomeArq;

  arquivo.open(pasta_local, ios::in);

  getline(arquivo, linha);
  setDna_seq(linha);
  
  arquivo.close();
}

std::string Sequencia::getDna_seq(){
  return this->Dna_seq;
}

void Sequencia::setDna_seq(std::string Dna_seq){
  this->Dna_seq = Dna_seq;
}

