#include <iostream>

using namespace std;

int main(){
    int i=99;
    int j; 
    int *p; 
    p = &i; 
    j = *p + 100;

    cout << j;
    
    return 0;
}