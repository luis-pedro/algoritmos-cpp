#include <iostream>

using namespace std;

int main(){
    int V = 0; //Quantidade de vídeos postados por Whindersson Nunes
    int views[100000000]; //Número de visualizações do vídeo

    int maior = 0; //Variável para armazenar o maior número de visualizações
    int menor = 0; //Variável para armazenar o menor número de visualizações
    
    for(int i = 0 ; i < V ; i++){
        cin >> views[i];
        if(views[i] > 10000000){
            maior += 1;
        } else{
            menor += 1;
        }
    }

    cout << maior << " videos com mais de 10M views" << endl;
    cout << menor << " videos com menos de 10M views" << endl;

    return 0;
}