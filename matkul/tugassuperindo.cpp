#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <stdlib.h>
using namespace std;
int ID[100];
string Nama[100];
int Harga[100];
string pelanggan;
int bayar, kembalian;
map<int, int> keranjang;
void waktu(){
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *ltm = localtime(&now);
    int tanggal = ltm->tm_mday;
    int bulan = ltm->tm_mon + 1;
    int tahun = ltm->tm_year + 1900;
    cout << "Tanggal : " << tanggal << "/" << bulan << "/" << tahun << endl;
    int jam = ltm->tm_hour;
    int menit = ltm->tm_min;
    int detik = ltm->tm_sec;
    cout << "Waktu   : " << jam << ":" << menit << ":" << detik << endl;
}
void tunggu(){
    cout << "Tekan enter untuk melanjutkan...";
    cin.get();
}
void clear(){
    system("cls");
}
string daftar(int x){
    string Pilihan = "";
    switch (x)
    {
        case 1: Pilihan = "1/Jagung Manis/5000"; break;
        case 2: Pilihan = "2/Kopi Bubuk/15000"; break;
        case 3: Pilihan = "3/Susu SKM/20000"; break;
        case 4: Pilihan = "4/Mie Indomie/3000"; break;
        case 5: Pilihan = "5/Apel Merah/9000"; break;
    default:
        Pilihan = "";
        break;
    }
    return Pilihan;
}
vector<string> split(string Pilihan, char delimiter){
    vector<string> data;
    string temp = "";
    for (int i = 0; i < Pilihan.length(); i++){
        if (Pilihan[i] == delimiter){
            data.push_back(temp);
            temp = "";
        } else {
            temp += Pilihan[i];
        }
    }
    data.push_back(temp);
    return data;
}
int banyakPilihan(){
    int banyak;
    for (int i = 1; i < 99 ; i++){
        if (daftar(i) == ""){
            banyak = i - 1;
            break;
        }
    }
    return banyak;
}
void deMenu(){
    for(int i=1;i<=banyakPilihan();i++){
        vector<string> data = split(daftar(i), '/');
        ID[i] = stoi(data[0]);
        Nama[i] = data[1];
        Harga[i] = stoi(data[2]);
    };
}
int beli(int id, int banyak){
    int total = Harga[id] * banyak;
    return total;
}
void menu(){
    cout << "======================================" << endl;
    cout << "||            Daftar Menu           ||" << endl;
    cout << "======================================" << endl;
    for(int i=1;i<=banyakPilihan();i++){
        cout << "|| " << ID[i] << " || " << Nama[i] << "\t||     " << Harga[i] << " ||" << endl;
    }
    cout << "======================================" << endl;
}
void header(){
    cout << "======================================" << endl;
    cout << "||          SUPERINDO MART          ||" << endl;
    cout << "======================================" << endl;
}
void footer(){
    cout << "======================================" << endl;
    cout << "||   Terimakasih telah berbelanja   ||" << endl;
    cout << "======================================" << endl;
}
void customer(){
    cout << "Masukkan nama pelanggan : ";
    cin >> pelanggan;
}
void pembelian(){
    // pembelian tetapi jika salah id maka akan diulang
    int id, banyak;
    string pilihan;
    int idTerakhir = banyakPilihan();
    do{
        cout << "Masukkan ID barang yang ingin dibeli : ";
        cin >> id;
        if (id > idTerakhir){
            cout << "ID barang tidak ditemukan" << endl;
            cout << "Apakah anda ingin memasukkan ID barang yang lain? (y/n) : ";
            cin >> pilihan;
            if (pilihan == "y"){
                continue;
            } else {
                break;
            }
        }
        cout << "Masukkan banyak barang yang ingin dibeli : ";
        cin >> banyak;
        keranjang[id] = banyak;
        cout << "Apakah anda ingin membeli barang lain? (y/n) : ";
        cin >> pilihan;
    }while(pilihan == "y");
}
int totalakhir(){
    int t = 0;
    for (auto x : keranjang){
        t += beli(x.first, x.second);
    }
    return t;
}
void barangygdibeli(){
    cout << "======================================" << endl;
    cout << "||          Daftar Belanja          ||" << endl;
    cout << "======================================" << endl;
    for (auto x : keranjang){
        cout << "|| " << Nama[x.first] << "\t||    " << x.second << " ||     " << beli(x.first, x.second) << " ||" << endl;
    }
    cout << "======================================" << endl;
    cout << "Total\t\t= " << totalakhir() << endl;
}
void pembayaran(){
    cout << "Masukkan uang yang dibayarkan : ";
    cin >> bayar;
    if(bayar < totalakhir()){
        cout << "Uang anda kurang" << endl;
        pembayaran();
    } else {
        kembalian = bayar - totalakhir();
        cout << "Kembalian anda : " << kembalian << endl;
    }
}
void nota(){
    clear();
    header();
    waktu();
    cout << "Nama Pelanggan : " << pelanggan << endl;
    barangygdibeli();
    cout << "Bayar\t\t= " << bayar << endl;
    cout << "Kembalian\t= " << kembalian << endl;
    footer();
}
void pembeli(){
    header();
    waktu();
    menu();
    customer();
    pembelian();
    barangygdibeli();
    pembayaran();
}
int main(){
    deMenu();
    pembeli();
    tunggu();
    nota();
    tunggu();
    return 0;
}