#include <iostream>
#include <cmath>

using namespace std;

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int permutasi(int n, int r) {
    return faktorial(n) / faktorial(n - r);
}

int kombinasi(int n, int r) {
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main(){
    cout << "Kalkulator Faktorial" << endl;
    cout << "====================" << endl;
    cout << "Permutasi dan Kombinasi" << endl;
    int n, r;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai r: ";
    cin >> r;
    cout << "Hasil Permutasi dari " << n << " dan " << r << " : " << permutasi(n, r) << endl;
    cout << "Hasil Kombinasi dari " << n << " dan " << r << " : " << kombinasi(n, r) << endl;
    system("pause");
    return 0;
}