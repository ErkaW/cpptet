#include <iostream>

using namespace std;

int main() {
    float a, b; //Ini untuk membuat variable angka jadi float
    printf("Masukkan angka pertama : ");
    scanf("%f",&a) ; // Ini untuk menginput angka pertama
    printf("Masukkan angka kedua : ");
    scanf("%f",&b); // Ini untuk menginput angka kedua
    float c = a+b;
    float d = a-b;
    float e = a*b;
    float f = a/b;
    printf("\nHasil dari penjumahan : %.f\n",c); //Ini untuk memunculkan hasil penjumlahan
    printf("Hasil dari pengurangan : %.f\n",d); //Ini untuk memunculkan hasil pengurangan
    printf("Hasil dari perkalian : %.f\n",e); //Ini untuk memunculkan hasil perkalian
    printf("Hasil dari pembagian : %.2f\n",f); //Ini untuk memunculkan hasil pembagian
}

