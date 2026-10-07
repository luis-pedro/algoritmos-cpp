#include "hashing.h"

int hash_aux(int k, int m){
    
    int resp = (k % m);
    
    if(resp < 0){
        resp = resp + m;
    }
    
    return resp;
}