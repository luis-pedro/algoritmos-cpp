#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 10;
    int *p = &b; // p é um ponteiro para int
    *p = 20;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl; // &: referência
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "b = " << b << endl;

    return 0;
}