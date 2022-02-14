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
  int verif = 0;
  //setando os valores base para sequencia_dna
  for(int z=0; z<STR_seq.size(); z++){
    sequencia_dna.setSTR(make_pair(STR_seq[z],0));
  }
  //analisando a sequencia e contando os str
  for(int i=0; i < (Dna_seq.length()-3); i++){
    //pegando a sequencia atual
    string sequencia_atual;
    for(int k=i; k<i+4; k++){
      sequencia_atual.push_back(Dna_seq[k]);
    }
    cout << sequencia_atual << endl;

    for(int j=0; j<STR_seq.size(); j++){
      if(sequencia_atual == STR_seq[j]){
        sequencia_dna.setVerif(j);
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

  
  for(int b=0;b<ordem.size();b++){
    cout << ordem[b];
  }
  cout << endl;
}