#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <windows.h>
#include <ctime>

using namespace std;

/* KUMPULAN PROGRAM SYSTEM */
// System Clear
void clrscr(){
    system("cls");
}

// System Sleep
void slp(){
    Sleep(1000);
}

// System Pause
void pause(){
    system("pause");
}

//  Proses Inisialisasi Menu Kopi
int listPilih, banyak, listhabis;
int i ,j ,k ,l;
string Pilihan;
int ID[100], Harga[100], Stok[100];
char Nama[100][100];

void menu(int listPilih){
    switch (listPilih)
    {
        case 1: Pilihan = "1/Americano/15000/50"; break;
        case 2: Pilihan = "2/Capuccino/15000/50"; break;
        case 3: Pilihan = "3/Vanilla Latte/18000/50"; break;
        case 4: Pilihan = "4/Macchiato/18000/50"; break;
        case 5: Pilihan = "5/Kopi Tubruk/8000/50"; break;
    default:
        listhabis = 1;
        break;
    }
    listPilih = 0;
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

void inisialisasiMenu(){
    for(i=1;i<=100;i++){
        menu(i);
        if(listhabis == 1){
            break;
        }
        vector<string> data = split(Pilihan, '/');
        banyak++;
    }
    for(j=1;j<=banyak;j++){
        menu(j);
        vector<string> data = split(Pilihan, '/');
        ID[j] = stoi(data[0]);
        strcpy(Nama[j], data[1].c_str());
        Harga[j] = stoi(data[2]);
        Stok[j] = stoi(data[3]);
    }
}

// Proses Initilisasi Waktu
void waktuBeli(){
    int jam,menit,detik;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    jam = ltm->tm_hour;
    menit = ltm->tm_min;
    detik = ltm->tm_sec;
    cout << "Waktu   : " << jam << ":" << menit << ":" << detik << endl;
}
void tanggalBeli(){
    int tanggal, bulan, tahun;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    tanggal = ltm->tm_mday;
    bulan = ltm->tm_mon + 1;
    tahun = ltm->tm_year + 1900;
    cout << "Tanggal : " << tanggal << "/" << bulan << "/" << tahun << "\t";
}

/* KUMPULAN HEADER */
// Header Permanen
void headerP(){
    cout << endl;
    cout << "===========================================" << endl;
    cout << "         Selamat Datang di kopikita        " << endl;
    cout << "===========================================" << endl;
    tanggalBeli();
    waktuBeli();
    cout << "===========================================" << endl;
    cout << "Kopi yang tersedia :"<<endl;
    cout << "===========================================" << endl;
    cout << "ID\tNama Kopi\tHarga\tStok" << endl;
    cout << "===========================================" << endl;
    for(k=1;k<=banyak;k++){
        cout << ID[k] << "\t" << Nama[k] << "\t" << Harga[k] << "\t" << Stok[k] << endl;
    };
    cout << "===========================================" << endl;
    cout << endl;
}

// Menu Nama Pelanggan
void nama(){
    string namaPelanggan;
    clrscr();
    headerP();
    namaPelanggan = "";
    cout << "Masukkan Nama Pelanggan : ";
    cin >> namaPelanggan;
    cout << "Nama Pelanggan : " << namaPelanggan << endl;
    pause();
    utama();
}

// Menu Utama
void utama(){
    int pilihUtama;
    clrscr();
    headerP();
    cout << "Silahkan pilih menu : ";
    cout << "-------------------------------------------" << endl;
    cout << "1. Nama Pelanggan" << endl;
    cout << "2. Pesanan Kopi" << endl;
    cout << "3. Pembayaran" << endl;
    cout << "4. Tunjuhkan Struk" << endl;
    cout << "5. Keluar" << endl;
    cin >> pilihUtama;
    switch (pilihUtama)
    {
    case 1:
        nama();
        break;
    case 2:
        pesanan();
        break;
    case 3:
        pembayaran();
        break;
    case 4:
        struk();
        break;
    case 5:
        keluar();
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
        pause();
        utama();
        break;
    }
}



int main(){
    clrscr();
    inisialisasiMenu();
    headerP();
    return 0;
}
