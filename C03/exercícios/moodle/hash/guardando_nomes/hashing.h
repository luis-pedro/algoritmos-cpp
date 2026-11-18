#ifndef HASHING_H
#define HASHING_H

#include <string>

using namespace std;

struct dado
{
    string info; // informacao
    int k; // chave
    int status; // 0: vazio, 1:ocupado, 2:removido
};

// Função base para hashing
int hash_aux(int k, int m);

// Sondagem linear
int hash1(int k, int i, int m);

// Sondagem quadrática
int hash2(int k, int i, int m, int c1, int c2);

// Função auxiliar 1 para double hashing
int h1(int k, int m);

// Função auxiliar 2 para double hashing
int h2(int k, int m);

// Songagem double hashing
int dhash(int k, int i, int m);

// Função para inserção de elementos usando sondagem linear
int hash_insert(dado t[], int m, int k);

// Função para inserção de elementos usando double hash
int hash_insert3(dado t[], int m, string info);

// Função para pesquisa usando sondagem linear
int hash_search(dado t[], int m, int k);

// Função para pesquisa usando double hash
int hash_search3(dado t[], int m, string info);

// Função para remoção de elementos em tabelas hash
int hash_remove(dado t[], int m, int k);

// Função para remoção de elementos com double hash
int hash_remove3(dado t[], int m, string info);

// Função de transformar uma string em um inteiro
int gerador_de_chave(string info); 

#endif

