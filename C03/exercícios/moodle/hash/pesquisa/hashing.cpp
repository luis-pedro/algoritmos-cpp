#include "hashing.h"

using namespace std;

int hash_aux(int k, int m){
    
    int resp = (k % m);
    
    if(resp < 0){
        resp = resp + m;
    }
    
    return resp;
}

int hash1(int k, int i, int m){
    
    int resp1 = ((hash_aux(k, m)) + i) % m;
    
    if(resp1 < 0){
        resp1 = resp1 + m;
    }
    
    return resp1;
}

int hash_insert(dado T[], int m, int k){
 
    int i = 0;
    do{
        
        int j = hash1(k,i,m);
        if(T[j].status != 1){
            T[j].k = k;
            T[j].status = 1;
            return j;
        } else {
            i++;
        }
        
        
    } while(i != m);
    
    return -1;
}

int hash_search(dado T[], int m, int k){
    
    int i = 0;
    int j;
    
    do{
        j = hash1(k,i,m);
        if(T[j].k == k){
            return j;
        }
        i++;
    } while((T[j].status != 0) && (i < m));
    
    return -1;
}