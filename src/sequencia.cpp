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
  int verif = 0;
  
  //analisando a sequencia e contando os str
  for(int i=0; i < (Dna_seq.length()-3); i++){
    //pegando a sequencia atual
    string sequencia_atual;
    for(int k=i; k<i+4; k++){
      sequencia_atual.push_back(Dna_seq[k]);
    }

    for(int j=0; j<STR_seq.size(); j++){
      if(sequencia_atual == STR_seq[j]){
        for(int l=0;l<4;l++){
          this->ordem.push_back(j+1);
        }
        j = STR_seq.size()+1;
        verif = 1;
      }
    }
    if(verif == 0){
      this->ordem.push_back(0);
    } else {
      i+=3;
    }
    verif = 0;
  }

}

Dna Sequencia::ler_ordem(){
  Dna sequencia_dna("Verificador");

  for(int z=0; z<STR_seq.size(); z++){
    sequencia_dna.setSTR(make_pair(STR_seq[z],0));
  }

  for(int i=0; i<STR_seq.size(); i++){
    int n_sequencia = 0;
    int maior_sequencia = 0;

    for(int k=0; k<ordem.size()-3; k++){
      if(i+1 == ordem[k] && i+1 == ordem[k+3]){
        n_sequencia ++;
        if(n_sequencia > maior_sequencia){
          maior_sequencia = n_sequencia;
        }
        k+=3;

      } else {
        n_sequencia = 0;
      }
    }

    sequencia_dna.setQtd(i, maior_sequencia);
  }


  return sequencia_dna;
}

std::vector<int> Sequencia::getOrdem(){
  return this->ordem;
}