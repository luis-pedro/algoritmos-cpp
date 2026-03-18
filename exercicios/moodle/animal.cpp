#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string A;
    getline(cin >> ws, A);
    transform(A.begin(), A.end(), A.begin(), :: toupper);

    string B;
    getline(cin >> ws, B);
    transform(B.begin(), B.end(), B.begin(), :: toupper);

    string C;
    getline(cin >> ws, C);
    transform(C.begin(), C.end(), C.begin(), :: toupper);

    if(A == "VERTEBRADO"){
        if(B == "AVE"){
            if(C == "CARNIVORO"){
                cout << "aguia";
            }
        }
    }
    return 0;
}