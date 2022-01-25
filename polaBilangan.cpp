#include <iostream>
#include <cmath>

using namespace std;

int main () {    
    int nomor[4];

    cout << "Ketik deret bilangan yang ada disoal : \n";

    for (int i=0; i<4; ++i) {
        cin >> nomor[i];
    }

    cout << "\n Deret nomornya adalah : ";

    for (int n=0; n<4; ++n) {
        cout << nomor[n] << " ";
    }

    cout << "\n Deret nomor pertama (A) adalah : ";
    cout << nomor[0];

    cout << "\n Beda deret nomor (B) adaah : ";
    cout << nomor[1] - nomor[0];

    return 0;
}