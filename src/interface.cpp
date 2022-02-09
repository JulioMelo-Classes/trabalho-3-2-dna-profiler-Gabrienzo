#include "../include/interface.h"

using namespace std;

void Interface::cabecalho(){
  cout << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << " Bem-vindo ao DNA Profiler versão 1.0" << endl << " Copyright © 2021, Selan R. dos Santos" << endl << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << endl;

  cout << "\033[3;40;34mEsse programa carrega uma base de DNAs e uma sequencia de DNA,\033[0m\t\t" << endl << "\033[3;40;34mambos carregados pelo usuario, e tenta realizar uma busca da \033[0m\t\t" << endl << "\033[3;40;34mmsequencia especifica dentro da base de DNA.\033[0m\t\t" << endl << endl;
}

void Interface::banco_carregando(std::string nomeBanco, std::string nomeSeq){
  cout << "\x1B[93m❖\033[0m Lendo arquivo com o banco de DNAs [nomeArq]" << endl << "\x1B[93m❖\033[0m Lendo arquivo contendo a sequencia de DNA [NomeArq]" << endl;
}