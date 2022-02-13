#include "../include/bancodedados.h"

#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;

void BancoDeDados::Carregar_Banco_DNA(string nomeArq){
  fstream arquivo;
  string linha, palavra;
  string pasta_local = "../data/" + nomeArq;
  int strn = 0;

  arquivo.open(pasta_local, ios::in);

  //pegar primeira linha
  getline(arquivo, linha);
  int tam = linha.length();
  char linha_char[tam+1];
  strcpy(linha_char, linha.c_str());
  for(int i=5; i<tam+1; i+=5){
    int c=0;
    int c2 = i;
    std::string str_aux;
    while(c<4){
      str_aux.push_back(linha_char[c2]);
      c++;
      c2++;
    }
    STR.push_back(str_aux);
  }
  

  //pegar o resto
  while(getline(arquivo, linha)){
    std::string nome;
    int tam = linha.length();
    char linha_char[tam+1];
    strcpy(linha_char, linha.c_str());
    int c=0;
    int i=0;
    while(c==0){
      if(linha_char[i] == ','){
        c=1;
        i++;
      }else{
        nome.push_back(linha_char[i]);
        i++;
      }
    }
    Dna* novoDna = new Dna(nome);
    for(int z=0;z<STR.size();z++,i+=2){
      std::string str_aux;
      str_aux.push_back(linha_char[i]);
      int qtd = stoi(str_aux);
      novoDna->setSTR(make_pair(STR[strn],qtd));
      strn++;
    }
    strn = 0;

    Banco_Dna.push_back(novoDna);
  }

  arquivo.close();
}

std::vector<std::string> BancoDeDados::getSTR(){
  return this->STR;
}