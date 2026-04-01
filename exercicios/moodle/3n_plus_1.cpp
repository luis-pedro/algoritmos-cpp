#include <iostream>
using namespace std;

int main(){

    int i, j;

    while(cin >> i >> j){

        int inicio = i;
        int fim = j;

        if(i > j){
            int temp = i;
            i = j;
            j = temp;
        }

        int maior = 0;

        for(int k = i; k <= j; k++){

            int n = k;
            int ciclo = 1;

            while(n != 1){
                if(n % 2 == 0){
                    n = n / 2;
                } else {
                    n = 3*n + 1;
                }
                ciclo++;
            }

            if(ciclo > maior){
                maior = ciclo;
            }
        }

        cout << inicio << " " << fim << " " << maior << endl;
    }

    return 0;
}