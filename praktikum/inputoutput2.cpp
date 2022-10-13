#include <iostream>

using namespace std;

int main() {
    int a, b, c; //Ini untuk membuat variable untuk angka jenis interger
    string d = ""; //Ini untuk membuat variabel untuk nama
    printf("Program Menghitung Diskon Barang\n");
    printf("Masukkan Nama pembeli : ");
    getline(cin, d); //Ini untuk menginput nama pembeli
    printf("Masukkan harga barang : Rp. ");
    scanf("%d",&a) ; //Ini untuk menginput harga barang
    printf("Masukkan banyak barang : ");
    scanf("%d",&b) ; //Ini untuk menginput banyak barang
    printf("Masukkan potongan harganya : ");
    scanf("%d",&c) ; //Ini untuk menginput berapa persen potongan harga
    int e = a * b; //Ini untuk menghitung harga keseluruhan
    int f = e * c / 100; //Ini untuk menghitung potongan harga
    int g = e - f; //Ini untuk menghitung total bayar
    printf("\nNama : %s \n", d.c_str()); //Ini untuk memunculkan nama pembeli
    printf("Harga keseluruhan barang : Rp. %d,-\n", e); //Ini untuk memunculkan harga keseluruhan
    printf("Dapat potongan harga : Rp. %d,-\n", f); //Ini untuk memunculkan potongan harga 
    printf("Total Bayar : Rp. %d,-\n", g); //Ini untuk memunculkan total bayar
}