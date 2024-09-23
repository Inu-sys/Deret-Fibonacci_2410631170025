#include <iostream>
using namespace std;

void fibonacci (int n){
    int a = 0, b = 1, NextTerm = 0;
    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; ++i){
            if (i == 1){
                    cout << a << ", ";
                    continue;
            }
            if (i == 2){
                    cout << b << ", ";
            continue;
            }
            NextTerm = a + b;
            a = b;
            b = NextTerm;
            cout << NextTerm;

            if ( i < n){
                cout << ", ";
            }
    }
    cout << endl;
}

int main (){
    int jumlah;

    cout << "Masukan jumlah elemen deret Fibonacci yang ingin ditampilkan: ";
    cin >> jumlah;

    fibonacci(jumlah);

    return 0;
}
