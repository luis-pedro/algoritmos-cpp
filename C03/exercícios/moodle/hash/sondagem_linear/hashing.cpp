#include "hashing.h"

int hash_aux(int k, int m){
    
    int resp = (k % m);
    
    if(resp < 0){
        resp = resp + m;
    }
    
    return resp;
}

int hash1(int k, int i, int m){
    
    int resp1 = ((k % m) + i) % m;
    
    if(resp1 < 0){
        resp1 = resp1 + m;
    }
    
    return resp1;
}