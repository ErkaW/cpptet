#include <iostream>
#include <cmath>

using namespace std;

int permutasi(int n, int r) {
    return (int) (tgamma(n + 1) / tgamma(n - r + 1));
}

int kombinasi(int n, int r){
    return (int) (tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1)));
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