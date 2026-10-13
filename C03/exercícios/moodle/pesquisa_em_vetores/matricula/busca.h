#ifndef BUSCA_H
#define BUSCA_H

#include <string>

using namespace std;

struct aluno{
    string nome;
    string curso;
    int matricula;
};

// Algoritmo de pesquisa sequencial
int sequencial(aluno vetor[],int tamanho, string x);

// Algoritmo de busca binária
int binaria(int vetor[],int tamanho, int x);

#endif