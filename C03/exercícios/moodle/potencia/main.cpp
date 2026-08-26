#include <iostream>

using namespace std;

int rec(int a, int n){
    if(n == 0){
        return 1;
    } else {
        return a * rec(a, n - 1);
    }
}

int main(){
    int a,n;
    
    cin >> a >> n;
    
    cout << rec(a,n) << endl;
    
    return 0;
}