#include "../include/bancodedados.h"

#include <fstream>
#include <sstream>

using namespace std;

void BancoDeDados::Carregar_Banco_DNA(string nomeArq){
  fstream arquivo;
  
  string linha, palavra, nome;
  int AGAT, AATG, TATC;
  string pasta_local = "../data/" + nomeArq;

  arquivo.open(pasta_local, ios::in);

  while(getline(arquivo, linha)){
    stringstream ss2;
    ss2 << linha;
    ss2 >> nome;
    ss2 >> AGAT;
    ss2 >> AATG;
    ss2 >> TATC;

    Dna* novoDna = new Dna(nome, AGAT, AATG, TATC);
    Banco_Dna.push_back(novoDna);
  }

  arquivo.close();
}

void BancoDeDados::teste(){
  for(auto &pessoa : Banco_Dna){
    cout << pessoa->getNome() << endl;
  }
}