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

int hash2(int k, int i, int m, int c1, int c2){
    double resp2 = (hash_aux(k,m) + (c1*i) + (c2*i*i)) % m;
    
    return resp2;
}