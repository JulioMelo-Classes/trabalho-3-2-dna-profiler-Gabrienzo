#include "../include/dna.h"

using namespace std;

Dna::Dna(string nome, int AGAT, int AATG, int TATC){
  this->nome = nome;
  this->str_AGAT = AGAT;
  this->str_AATG = AATG;
  this->str_TATC = TATC;

}

std::string Dna::getNome(){
  return this->nome;
}