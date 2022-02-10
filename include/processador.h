#ifndef PROCESSADOR_H
#define PROCESSADOR_H

#include "interface.h"
#include "bancodedados.h"
#include "sequencia.h"
#include <iostream>

// Processador realiza o intermedio entre o banco, a sequencia e a interface, indicando o momento para realizar as suas devidas operações, chamando os metodos necessarios.
class Processador {

    private:
    
    BancoDeDados Banco;
    Interface Menu;
    Sequencia sequencia;
    bool verificador = true;

    public:

    /*! carrega o banco de dados e a sequencia especifica;
      @param nomesArqs entradas realizadas pelo usuario ao iniciar o programa.
    */
    void carregarDados(char *nomesArqs[]);

    /*! realiza a busca da sequencia no banco de dados.
    */
    void Procurar();

    /*! finaliza o programa deletando todo o banco de dados.
    */
    void Finalizar();

};

#endif