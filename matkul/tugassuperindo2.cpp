#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>
#include <stdlib.h>
#include <fstream>
using namespace std;
void waktu(){
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *ltm = localtime(&now);
    int jam = ltm->tm_hour;
    int menit = ltm->tm_min;
    int detik = ltm->tm_sec;
    cout << "Waktu   : " << jam << ":" << menit << ":" << detik << endl;
}
void tanggal(){
    time_t now = time(0);
    char* dt = ctime(&now);
    tm *ltm = localtime(&now);
    int tanggal = ltm->tm_mday;
    int bulan = ltm->tm_mon + 1;
    int tahun = ltm->tm_year + 1900;
    cout << "Tanggal : " << tanggal << "/" << bulan << "/" << tahun << endl;
}
void tunggu(){
    cout << "Tekan enter untuk melanjutkan...";
    cin.get();
}
void tunggunota(){
    cout << "";
    cin.get();
}
void clear(){
    system("cls");
}
int ID[100];
string Nama[100];
int Harga[100];
string records[100];
string pelanggan;
int bayar, kembalian;
int banyakPilihan() {
    ifstream file("produk.txt");
    string line;
    int i = 0;
    while (getline(file, line)) {
        i++;
    }
    file.close();
    return i;
}
void openFile(){
    ifstream file("produk.txt");
    string line;
    int i = 0;
    while (getline(file, line)) {
        records[i] = line;
        i++;
    }
    file.close();
}
string daftar(int x) { 
    return records[x - 1];
}
vector<string> split(string Pilihan, char delimiter){
    vector<string> data;
    string temp = "";
    for (int i = 0; i <= Pilihan.length(); i++){
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
map<int, int> keranjang;
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
void hapusKeranjang(){
    for (int i = 1; i <= banyakPilihan(); i++){
        if (keranjang[i] == 0){
            keranjang.erase(i);
        }
    }
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
    tanggal();
    cout << "Nama pelanggan : " << pelanggan << endl;
    barangygdibeli();
    cout << "Bayar\t\t= " << bayar << endl;
    cout << "Kembalian\t= " << kembalian << endl;
    footer();
}
void pembeli(){
    header();
    tanggal();
    waktu();
    menu();
    customer();
    pembelian();
    hapusKeranjang();
    barangygdibeli();
    pembayaran();
    footer();
}
int main(){
    openFile();
    deMenu();
    pembeli();
    tunggu();
    nota();
    tunggunota();
    return 0;
}