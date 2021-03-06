#include "../include/processador.h" 
#include <iostream>

using namespace std;

void Processador::carregarDados(char *nomesArqs[]){
    string data, seq, arg1,arg3;
    string dComp="-d",sComp="-s";

    arg1 = nomesArqs[1];
    arg3 = nomesArqs[3];

    Menu.cabecalho();

    //carregando primeira parte
    if(arg1 == dComp){
        data = nomesArqs[2];
        Banco.Carregar_Banco_DNA(data);
        Menu.banco_carregando(data, dComp);
    } else if(arg1 == sComp){
        seq = nomesArqs[2];
        sequencia.Carregar_Banco_Sequencia(seq);
        Menu.banco_carregando(seq, sComp);
    } else{
        Menu.erroEntrada();
        this->verificador = false;
    }
    //carregando segunda parte
    if(arg3 == dComp){
        data = nomesArqs[4];
        Banco.Carregar_Banco_DNA(data);
        Menu.banco_carregando(data, dComp);
    } else if(arg3 == sComp){
        seq = nomesArqs[4];
        sequencia.Carregar_Banco_Sequencia(seq);
        Menu.banco_carregando(seq, sComp);
    } else{
        Menu.erroEntrada();
        this->verificador = false;
    }

    if(verificador == true){
        Menu.aguarde();
        Menu.banco_completo();
    }
    

}

void Processador::Procurar(){
    //verificar se o banco de dados foi carregado, caso seja true ele inicia a busca.
    if(verificador == true){
        //passamos os STRs para sequencia ficar informada de quais sequencias deve procurar na sequencia passada
        for(auto &it : Banco.getSTR()){
            sequencia.setSTR(it);
        }
        Menu.buscando();
        sequencia.procurar();
        Menu.imprimir(Banco.Comparar_Dna(sequencia.ler_ordem()), sequencia.getOrdem(), sequencia.getDna_seq());
    }
}

void Processador::Finalizar(){
    Banco.deletarBanco();
}