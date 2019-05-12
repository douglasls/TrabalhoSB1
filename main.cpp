#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "processadormacro.h"

int main(){
    std::string nomeArquivo, nomearq, escrever;
    //abrir arquivo no modo de leitura
    nomeArquivo = "macro.txt";
    std::ifstream arquivo (nomeArquivo); //modo leitura
    if(!arquivo){
        std::cout << "Ocorreu um erro na abertura do arquivo" << std::endl;
    }
    nomearq = "preprocessado.pre";
    std::ofstream arquivosaida(nomearq);
    if(!arquivo){
        std::cout << "Ocorreu um erro na criacao do arquivo de saida" << std::endl;
    }
    expandirmacro(arquivo, arquivosaida);
    return 0;

}
