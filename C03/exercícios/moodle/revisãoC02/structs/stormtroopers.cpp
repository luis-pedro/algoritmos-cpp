#include <iostream>
#include <iomanip>
using namespace std;

struct soldado{
    int idd;
    double IM;
    double FA;
    double GA;
};

int main(){
    soldado storm[1000];
    int i = 0;
    int id;

    cin >> id;
    while(id != 0){
        storm[i].idd = id;
        cin >> storm[i].IM >> storm[i].FA;
        storm[i].GA = (storm[i].IM + storm[i].FA) / 2;
        i++;
        cin >> id;
    }

    int melhor = 0;
    for(int j = 1; j < i; j++){
        if(storm[j].GA > storm[melhor].GA){
            melhor = j;
        }
    }

    cout << "Stormtrooper escolhido: " << storm[melhor].idd << endl;
    cout << fixed << setprecision(2) << "GA = " << storm[melhor].GA << endl;
    return 0;
}