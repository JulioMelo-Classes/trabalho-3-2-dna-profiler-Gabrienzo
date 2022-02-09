#include "../include/interface.h"
#include "../include/bancodedados.h"
#include "../include/sequencia.h"
#include <iostream>

using namespace std;

int main(){
  BancoDeDados banco;
  Sequencia sequencia;
  Interface menu;

  std::string data = "data.csv", seq = "sequence_alice.txt";

  menu.cabecalho();
  menu.banco_carregando(data,seq);
  banco.Carregar_Banco_DNA("data.csv", "-d");
  sequencia.Carregar_Banco_Sequencia("sequence_alice.txt", "-s");
  cout << sequencia.getDna_seq() << endl;
  banco.teste();
  
  return 0;
}