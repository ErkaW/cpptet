#include <iostream>
#include <algorithm>

using namespace std;

class Matriks{
    public:
        int baris1, kolom1, baris2, kolom2;
        int data1[100][100], data2[100][100];
        Matriks(int baris1, int kolom1, int baris2, int kolom2){
            this->baris1 = baris1;
            this->kolom1 = kolom1;
            this->baris2 = baris2;
            this->kolom2 = kolom2;
        }
        void input1(){
            for (int i = 0; i < this->baris1; i++){
                for (int j = 0; j < this->kolom1; j++){
                    cout << "Masukkan data baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
                    cin >> this->data1[i][j];
                }
            }
        }
        void input2(){
            for (int i = 0; i < this->baris2; i++){
                for (int j = 0; j < this->kolom2; j++){
                    cout << "Masukkan data baris ke-" << i+1 << " kolom ke-" << j+1 << " : ";
                    cin >> this->data2[i][j];
                }
            }
        }
        void print1(){
            for (int i = 0; i < this->baris1; i++){
                for (int j = 0; j < this->kolom1; j++){
                    cout << this->data1[i][j] << " ";
                }
                cout << endl;
            }
        }
        void print2(){
            for (int i = 0; i < this->baris2; i++){
                for (int j = 0; j < this->kolom2; j++){
                    cout << this->data2[i][j] << " ";
                }
                cout << endl;
            }
        }
        void perkalian(){
            if(this->kolom1 == this->baris2){    
                int hasil[100][100];
                for (int i = 0; i < this->baris1; i++){
                    for (int j = 0; j < this->kolom2; j++){
                        hasil[i][j] = 0;
                        for (int k = 0; k < this->kolom1; k++){
                            hasil[i][j] += this->data1[i][k] * this->data2[k][j];
                        }
                    }
                }
                // menunjukkan matriks 1 x matriks 2 setelah itu hasil
                cout << "Matriks 1 x Matriks 2 = " << endl;
                for (int i = 0; i < this->baris1; i++){
                    for (int j = 0; j < this->kolom1; j++){
                        cout << this->data1[i][j] << " ";
                    }
                    if (i == this->baris1/2){
                        cout << "x ";
                    } else {
                        cout << "  ";
                    }
                    for (int j = 0; j < this->kolom2; j++){
                        cout << this->data2[i][j] << " ";
                    }
                    if (i == this->baris1/2){
                        cout << "= ";
                    } else {
                        cout << "  ";
                    }
                    for (int j = 0; j < this->kolom2; j++){
                        cout << hasil[i][j] << " ";
                    }
                    cout << endl;
                }
            }else{
                cout << "Kolom matriks pertama tidak sama dengan baris matriks kedua" << endl;
            }
        }

};

void runtime();

void lagi(){
    char pilih;
    cout << "Apakah anda ingin mengulang? (y/n) : ";
    cin >> pilih;
    if (pilih == 'y'){
        system("cls");
        runtime();
    }else{
        exit(0);
    }
}

void runtime(){
    system("cls");
    cout << "==============================" << endl;
    cout << "Kalkulator Perkalian 2 Matriks" << endl;
    cout << "==============================\n" << endl;
    int baris1, kolom1, baris2, kolom2;
    cout << "Masukkan baris matriks pertama : ";
    cin >> baris1;
    cout << "Masukkan kolom matriks pertama : ";
    cin >> kolom1;
    cout << "Masukkan baris matriks kedua : ";
    cin >> baris2;
    cout << "Masukkan kolom matriks kedua : ";
    cin >> kolom2;
    Matriks matriks(baris1, kolom1, baris2, kolom2);
    cout << "Masukkan data matriks pertama" << endl;
    matriks.input1();
    cout << "Masukkan data matriks kedua" << endl;
    matriks.input2();
    cout << endl;
    cout << "Hasil perkalian matriks" << endl;
    matriks.perkalian();
    lagi();
}

int main() {
    runtime();
    return 0;
}