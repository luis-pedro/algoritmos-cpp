#include "busca.h"

// Algoritmo de pesquisa sequencial
int sequencial(aluno vetor[],int tamanho, string x)
{
  int pos = -1; // posição onde x foi encontrado no vetor
  int i = 0; // contador
	
  while (pos == -1  && i < tamanho)
  {
    if (vetor[i].nome == x)
        pos = i;
    else
        i++;    
  }
  
  return pos;
}

// Algoritmo de busca binária
int binaria(aluno vetor[],int tamanho, string x)
{
  bool achou; // var aux p/ busca
  int baixo, meio, alto; // var aux
		
  baixo = 0;
  alto = tamanho-1; 
  achou = false;
  while ((baixo <= alto) && (achou == false))
  {		
    meio = (baixo + alto) / 2;
    if (x < vetor[meio].nome)
      alto = meio - 1; 
    else
      if (x > vetor[meio].nome)
        baixo = meio + 1; 
      else 
        achou = true;
  }		
  if (achou)
    return meio;
  else
    return -1;
}