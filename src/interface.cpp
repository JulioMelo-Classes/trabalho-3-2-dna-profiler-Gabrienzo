#include "../include/interface.h"

using namespace std;

void Interface::cabecalho(){
  cout << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << " Bem-vindo ao DNA Profiler versão 1.0" << endl << " Copyright © 2021, Selan R. dos Santos" << endl << "<-: ✧ :- ✦ -: ✧ :- 💠 -: ✧ :- ✦ -: ✧ :->" << endl << endl;

  cout << "\033[3;40;34mEsse programa carrega uma base de DNAs e uma sequencia de DNA,\033[0m\t\t" << endl << "\033[3;40;34mambos carregados pelo usuario, e tenta realizar uma busca da \033[0m\t\t" << endl << "\033[3;40;34msequencia especifica dentro da base de DNA.\033[0m\t\t" << endl << endl;
}

void Interface::banco_carregando(std::string nome, std::string comp){
  std::string nome_cor = "\x1B[31m";
  nome_cor += nome;
  nome_cor += "\033[0m";

  if(comp == "-d"){
    cout << "\x1B[34m❖\033[0m Lendo arquivo com o banco de DNAs ["<< nome_cor << "]" << endl;
  }else{
    cout << "\x1B[34m❖\033[0m Lendo arquivo contendo a sequencia de DNA ["<< nome_cor << "]" << endl;
  }
}

void Interface::aguarde(){
  cout << "\x1B[34m❖\033[0m Processando data, espere um pouco..." << endl << endl;
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

void Interface::noMatch(){
  cout << "\x1B[93m▶\033[0m Não foi encontrado nenhum DNA em nossa base de dados para a sequencia inserida..." << endl;
}

void Interface::imprimir(Dna pessoa, std::vector<int> ordem, std::string Dna_seq){
  if(pessoa.getNome() != "nada"){
    std::string setas,nomes,Seq_cor;
    for(int i=0; i<Dna_seq.length(); i++){
      setas.push_back(' ');
      nomes.push_back(' ');
    }
    if(ordem.size() < setas.length()){
      for(int i=0; i<3;i++){
        ordem.push_back(0);
      }
    }

    cout << endl << endl;
    cout << "Match ID (99,9%): " << pessoa.getNome() << endl;
    cout << "DNA Profile: " << endl;
    //procurar pelos strs em ordem (criação da string setas)
    for(int i=0; i<pessoa.getTamSeq(); i++){
      int contador=0,num=i+1,contador_aux,pos_maior;
      //procurar por um str especifico
      for(int j=0; j<ordem.size(); j++){
        contador_aux=0;
        //caso o ache, contar quantos em sequencia;
        if(ordem[j] == num){
          for(int k=j;ordem[k] == num; k++){
          contador_aux++;
          }
          j+=contador_aux-1;
        }
        //caso a sequencia encontrada seja maior que a ultima, salvar;
        if(contador_aux > contador){
          contador = contador_aux;
          pos_maior = j-contador_aux+1;
        }
      }
      //adicionar as setas baseado na quantidade de str's encontrador
      for(int l=0;l<contador; l++){
        setas[pos_maior] = 'v';
        pos_maior++;
      }

    }

    //Criação da string "nomes"
    for(int i=0; i<nomes.length();i++){
      if(ordem[i] != 0 && setas[i] == 'v'){
        std::string Str;
        Str = pessoa.getSTR(ordem[i]);
        //colocar o nome do STR
        for(int j=i,l=0;l<4;j++,l++){
          nomes[j] = Str[l];
        }
        //quantidade
        nomes[i+5] = '[';
        nomes[i+6] = 'x';
        int num=0;
        for(int g=i;setas[g] == 'v';g++){
          num++;
        }
        string numString = to_string(num/4);
        nomes[i+7] = numString[0];
        nomes[i+8] = ']';
        i+=num+1;
      }
    }
    
    //Criação da string "Seq_cor"
    for(int i=0; i<Dna_seq.length(); i++){
      if(setas[i] == 'v'){
        Seq_cor+="\x1B[92m";
        int cont=0;
        for(int j=i; setas[j] == 'v';j++){
          Seq_cor.push_back(Dna_seq[j]);
          cont++;
        }
        Seq_cor+="\033[0m";
        i+=cont-1;
      }else{
        Seq_cor.push_back(Dna_seq[i]);
      }
    }

    //impressão de fato
    cout << nomes << endl;
    cout << setas << endl;
    cout << Seq_cor << endl;


  }else{
    noMatch();
  }
}