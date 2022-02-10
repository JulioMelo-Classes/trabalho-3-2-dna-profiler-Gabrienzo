#include "../include/processador.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  Processador processador;

  processador.carregarDados(argv, argc);

  processador.Procurar();

  //processador.Finalizar();
  
  return 0;
}