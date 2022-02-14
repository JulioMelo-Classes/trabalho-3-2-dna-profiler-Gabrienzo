#include "../include/dna.h"

using namespace std;

Dna::Dna(string nome){
  this->nome = nome;
}

std::string Dna::getNome(){
  for(int i = 0; i<sequencias_dna.size();i++){
    cout << sequencias_dna[i].first << "\t" << sequencias_dna[i].second << endl;
  }
  return this->nome;
}

void Dna::setSTR(std::pair<std::string, int> sequencia){
  this->sequencias_dna.push_back(sequencia);
}

void Dna::setVerif(int j, int quantidade){
  this->sequencias_dna[j] = make_pair(sequencias_dna[j].first, quantidade);
}

int Dna::getValorSeq(int posicao){
  return sequencias_dna[posicao].second;
}