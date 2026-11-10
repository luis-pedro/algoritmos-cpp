#include "hashing.h"

int h1(int k, int m){
    
    int resp1 = (k % m);
    
    if(resp1 < 0){
        resp1 = resp1 + m;
    }
    
    return resp1;
}

int h2(int k, int m){
    
    int resp2 = 1 + (k % (m - 1));
    
    return resp2;
}

int dhash(int k, int i, int m){
    
    int dresp = (h1(k,m) + (i*h2(k,m))) % m;
    
    if(dresp < 0){
        dresp = dresp + m;
    }
    
    return dresp;
}