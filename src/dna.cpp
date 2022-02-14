#include "../include/dna.h"

using namespace std;

Dna::Dna(string nome){
  this->nome = nome;
}

std::string Dna::getNome(){
  return this->nome;
}

void Dna::setSTR(std::pair<std::string, int> sequencia){
  this->sequencias_dna.push_back(sequencia);
}

void Dna::setNome(std::string nome){
  this->nome = nome;
}

void Dna::setQtd(int j, int quantidade){
  this->sequencias_dna[j] = make_pair(sequencias_dna[j].first, quantidade);
}

int Dna::getValorSeq(int posicao){
  return this->sequencias_dna[posicao].second;
}

int Dna::getTamSeq(){
  return this->sequencias_dna.size();
}

std::string Dna::getSTR(int i){
  return this->sequencias_dna[i-1].first;
}