#ifndef PROCESSADOR_H
#define PROCESSADOR_H

#include "interface.h"
#include "bancodedados.h"
#include "sequencia.h"
#include <iostream>

class Processador {

    private:
    
    BancoDeDados Banco;
    Interface Menu;
    Sequencia sequencia;
    bool verificador = true;

    public:

    void carregarDados(char *nomesArqs[], int numArqs);

    void Procurar();

    void Finalizar();

};

#endif