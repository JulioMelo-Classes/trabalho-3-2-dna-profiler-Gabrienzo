#include "../include/interface.h"

using namespace std;

void Interface::cabecalho(){
  cout << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << " Bem-vindo ao DNA Profiler versão 1.0" << endl << " Copyright © 2021, Selan R. dos Santos" << endl << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << endl;

  cout << "\033[3;40;34mEsse programa carrega uma base de DNAs e uma sequencia de DNA,\033[0m\t\t" << endl << "\033[3;40;34mambos carregados pelo usuario, e tenta realizar uma busca da \033[0m\t\t" << endl << "\033[3;40;34msequencia especifica dentro da base de DNA.\033[0m\t\t" << endl << endl;
}

void Interface::banco_carregando(std::string nome, std::string comp){

  if(comp == "-d"){
    cout << "\x1B[34m❖\033[0m Lendo arquivo com o banco de DNAs ["<< nome << "]" << endl;
  }else{
    cout << "\x1B[34m❖\033[0m Lendo arquivo contendo a sequencia de DNA ["<< nome << "]" << endl << endl;
  }
}

void Interface::erroEntrada(){
  cout << "Erro! Indicador de entrada incorreto, por favor user \'-d\' e \'-s\' como especificado no README." << endl;
}

void Interface::banco_completo(){
  cout << "\x1B[34m❖\033[0m Carregamento do Banco e da Sequencia completos!" << endl;
}

void Interface::buscando(){
  cout << "\x1B[34m❖\033[0m Iniciando a busca da sequencia no banco de dados... aguarde um momento." << endl;
}