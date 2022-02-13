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

void Sequencia::setSTR(std::string Str){
  STR_seq.push_back(Str);
}

void Sequencia::procurar(){
  Dna sequencia_dna("Verificador");
  string sequencia_atual;

  for(int i=0; Dna_seq.length()-2; i++){


    //pegando a sequencia atual
    for(int k=i; k<i+3; k++){
      sequencia_atual.push_back(Dna_seq[k]);
    }

    for(int j=0; j<STR_seq.size(); j++){
      if(sequencia_atual == STR_seq[j]){

        






      }









    }






  }



}