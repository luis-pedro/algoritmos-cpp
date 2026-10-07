#include <iostream>
#include "hashing.h"

using namespace std;

int main(){
    int h;
    int k,m;
    
    cin >> k >> m;
    
    while(k != 0 || m != 0){
        h = hash_aux(k,m);
        
        cout << h << endl;
        cin >> k >> m;
    }
    
    return 0;
}