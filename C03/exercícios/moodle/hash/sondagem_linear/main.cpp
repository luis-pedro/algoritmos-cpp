#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int h1;
    int k, i, m;
    
    cin >> k >> m;
    
    for( i = 0 ; i < m ; i++){
        h1 = hash1(k, i, m);
        
        cout << h1 << " ";
    }
    return 0;
}