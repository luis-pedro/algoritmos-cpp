#include "hashing.h"

using namespace std;

// Função base para hashing
int hash_aux(int k, int m)
{
    int h = k % m;
    if (h < 0)
        h += m;
    return h;    
}

// Sondagem linear
int hash1(int k, int i, int m)
{
    return (hash_aux(k,m) + i) % m;
}

// Sondagem quadrática
int hash2(int k, int i, int m, int c1, int c2)
{
    return (hash_aux(k,m) + c1 * i + c2 * i * i) % m;
}

// Função auxiliar 1 para double hashing
int h1(int k, int m)
{
    int h = k % m;
    if (h < 0)
        h += m;
    return h;    
}

// Função auxiliar 2 para double hashing
int h2(int k, int m)
{
    int h = 1 + (k % (m-1));
    if (h < 0)
        h += m;
    return h;    
}

// Songagem double hashing
int dhash(int k, int i, int m)
{
    return (h1(k, m) + i * h2(k, m)) % m;
}

// Função para inserção de elementos usando double hash
int hash_insert2(dado t[], int m, info atleta)
{
    
    int k = gerador_de_chave(atleta.nome); 
    
    int i;
    int j;
    
    i = 0;
    do
    {
        j = dhash(k, i, m);
        if (t[j].status != 1)
        {
            t[j].atleta = atleta;
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
        else
            i++;
    } while (i != m);
    return -1; // tabela cheia
}

// Função para inserção de elementos usando sondagem linear
int hash_insert(dado t[], int m, int k)
{
    int i;
    int j;
    
    i = 0;
    do
    {
        j = hash1(k, i, m);
        if (t[j].status != 1)
        {
            t[j].k = k;
            t[j].status = 1;
            return j;
        }
        else
            i++;
    } while (i != m);
    return -1; // tabela cheia
}

// Função para pesquisa usando sondagem linear
int hash_search(dado t[], int m, int k)
{
    int i;
    int j;
    
    i = 0;
    do
    {
        j = hash1(k, i, m);
        if (t[j].k == k)
            return j;
        i++;    
    } while (t[j].status != 0 && i < m);
    return -1;
}

// Função para pesquisa usando double hash
int hash_search2(dado t[], int m, info atleta)
{
    int k = gerador_de_chave(atleta.nome); 
    
    int i;
    int j;
    
    i = 0;
    do
    {
        j = dhash(k, i, m);
        if (t[j].k == k)
            return j;
        i++;    
    } while (t[j].status != 0 && i < m);
    return -1;
}

// Função para remoção de elementos em tabelas hash usando double hash
int hash_remove2(dado t[], int m, info atleta)
{
    int k = gerador_de_chave(atleta.nome);
    
    int j;
    
    j = hash_search2(t, m ,atleta);
    if (j != -1)
    {
        t[j].atleta.nome = "vazio";
        t[j].atleta.idade = 0;
        t[j].atleta.peso = 0;
        t[j].atleta.altura = 0;
        t[j].k = -1;
        t[j].status = 0;
        return 0;
    }
    else
        return -1;
}

// Função para remoção de elementos em tabelas hash
int hash_remove(dado t[], int m, int k)
{
    int j;
    
    j = hash_search(t, m ,k);
    if (j != -1)
    {
        t[j].status = 2;
        t[j].k = -1;
        return 0;
    }
    else
        return -1;
}

// Função para transformar uma sting em int
int gerador_de_chave(string nome){
    int soma = 0; // soma de zero caracteres vale 0

    for(int i = 0; i < nome.length(); i++){ // posições 0 até length-1
        soma = soma + nome[i]; // o char entra na soma como número
    }

    return soma;
}
