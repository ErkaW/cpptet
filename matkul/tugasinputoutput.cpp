#include <iostream>

using namespace std;

int main(){
    int i,n;
    float a,b;
    cout << "Program Penjumlahan Bilangan" << endl;
    cout << endl;
    cout << "Masukkan jumlah angka yang akan ditambah : ";
    cin >> n;
    cout << endl;
    i=1;
    Putar:
    if(i<=n){
        cout << "Masukkan angka ke-" << i << " : ";
        cin >> a;
        b = b + a;
        cout << "Hasil penjumlahan : " << b << endl << endl;
        i++;
        goto Putar;
    }else{
        cout << "Hasil akhir penjumlahan : " << b << endl;
    }
    return 0;
}
