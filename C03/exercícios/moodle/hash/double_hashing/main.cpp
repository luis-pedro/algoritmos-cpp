#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int k,m,aux;
    
    cin >> k >> m;
    
    for(int i = 0 ; i < m ; i++){
        aux = dhash(k,i,m);
        
        cout << aux << " ";
    }
    
    return 0;
}