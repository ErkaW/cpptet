#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

void waktubeli(){
    int jam,menit,detik;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    jam = ltm->tm_hour;
    menit = ltm->tm_min;
    detik = ltm->tm_sec;
    cout << "Waktu   : " << jam << ":" << menit << ":" << detik << endl;
}
void tanggalbeli(){
    int tanggal, bulan, tahun;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    tanggal = ltm->tm_mday;
    bulan = ltm->tm_mon + 1;
    tahun = ltm->tm_year + 1900;
    cout << "Tanggal : " << tanggal << "/" << bulan << "/" << tahun << "\t";
}
void headerpesan(){
    cout << endl;
    cout << "===========================================" << endl;
    cout << "         Selamat Datang di Kopikita        " << endl;
    cout << "===========================================" << endl;
    tan
    cout << "Silahkan memilih pesanan anda" << endl;
    cout << "-------------------------------------------" << endl;
}
void headerstruk(){
    cout << endl;
    cout << "===========================================" << endl;
    cout << "       Terima Kasih Telah Berbelanja       " << endl;
    cout << "                di Kopikita                " << endl;
    cout << "===========================================" << endl;
    cout << "Struk Pembelian" << endl;
    cout << "-------------------------------------------" << endl;
}
void menu(){
    int id[10]= {1,2,3,4,5,6,7,8,9,10};
    string kopi[10] = {"Americano","Black Coffee","Original Coffee","Maqiato\t","Coco Maqiato","Vanilla Latte","Hazelnut Latte","Coffee Latte","Capuccino","Kopi Tubruk"};
    int harga[10] = {13000,13000,13000,13000,13000,15000,15000,13000,13000,6000};
    cout << "Kopi yang tersedia :"<<endl;
    cout << "================================" << endl;
    cout << "ID\tNama Kopi\tHarga" << endl;
    cout << "================================" << endl;
    int i;
    for(i=0;i<10;i++){
        cout<<id[i]<<"\t"<<kopi[i]<<"\t"<< "Rp." <<harga[i]<<endl;
    }
    cout << "================================" << endl;
}
void transaksi(){
    int hargabeli[10] = {13000,13000,13000,13000,13000,15000,15000,13000,13000,6000};
    int totalharga[10] = {0};
    string namakopi[10] = {"Americano","Black Coffee","Original Coffee","Maqiato\t","Coco Maqiato","Vanilla Latte","Hazelnut Latte","Coffee Latte","Capuccino","Kopi Tubruk"};
    int total = 0;
    int idbarang;
    int jumlahbarang;
    LOL:
    string pilihan;
    cout << "Masukkan ID Kopi : ";
    cin >> idbarang;
    cout << "Masukkan Jumlah Pesanan : ";
    cin >> jumlahbarang;
    switch (idbarang){
        case 1:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Americano" << endl;
            totalharga[0] = hargabeli[0] * jumlahbarang;
            total = total + totalharga[0];
            break;
        case 2:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Black Coffee" << endl;
            totalharga[1] = hargabeli[1] * jumlahbarang;
            total = total + totalharga[1];
            break;
        case 3:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Original Coffee" << endl;
            totalharga[2] = hargabeli[2] * jumlahbarang;
            total = total + totalharga[2];
            break;
        case 4:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Maqiato" << endl;
            totalharga[3] = hargabeli[3] * jumlahbarang;
            total = total + totalharga[3];
            break;
        case 5:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Coco Maqiato" << endl;
            totalharga[4] = hargabeli[4] * jumlahbarang;
            total = total + totalharga[4];
            break;
        case 6:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Vanilla Latte" << endl;
            totalharga[5] = hargabeli[5] * jumlahbarang;
            total = total + totalharga[5];
            break;
        case 7:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Hazelnut Latte" << endl;
            totalharga[6] = hargabeli[6] * jumlahbarang;
            total = total + totalharga[6];
            break;
        case 8:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Coffee Latte" << endl;
            totalharga[7] = hargabeli[7] * jumlahbarang;
            total = total + totalharga[7];
            break;
        case 9:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Capuccino" << endl;
            totalharga[8] = hargabeli[8] * jumlahbarang;
            total = total + totalharga[8];
            break;
        case 10:
            cout << "===========================================" << endl;
            cout << "Pesanan anda adalah : " << "Kopi Tubruk" << endl;
            totalharga[9] = hargabeli[9] * jumlahbarang;
            total = total + totalharga[9];
            break;
        default:
            cout << "Kopi tidak tersedia" << endl;
            break;
    }
    cout << "Total Harga : " << "Rp." << total << endl;
    cout << "===========================================" << endl;
    cout << "Apakah anda ingin memesan lagi? (y/n) : ";
    cin >> pilihan;
    if(pilihan == "y"){
        system("cls");
        headerpesan();
        menu();
        idbarang = 0;
        jumlahbarang = 0;
        goto LOL;
    }else if(pilihan == "n"){
        system("cls");
        headerstruk();
        cout<<"Kopi yang anda pesan :"<<endl;
        cout<<"==========================================="<<endl;
        cout<<"ID\tNama Kopi\tJumlah\tHarga"<<endl;
        cout<<"==========================================="<<endl;
        int i;
        for(i=0;i<10;i++){
            if(totalharga[i] != 0){
                cout<<i+1<<"\t"<<namakopi[i]<<"\t"<<totalharga[i]/hargabeli[i]<<"\t"<< "Rp." <<totalharga[i]<<endl;
            }
        }
    }
    cout << "===========================================" << endl;
    cout << "Total Harga : \t\t\t" << "Rp." << total << endl;
    cout << "Masukkan uang anda : \t\t" << "Rp.";
    int uang;
    cin >> uang;
    int kembalian;
    kembalian = uang - total;
    cout << "Kembalian anda adalah : \t" << "Rp." << kembalian << endl;
}
void footer(){
    cout << "===========================================" << endl;
    cout << "[Hehe, not bad] ~Alucard" << endl;
    cout << "===========================================" << endl;
}
/// @brief 
/// @return 
int main(){
    system("cls");
    headerpesan();
    menu();
    transaksi();
    footer();
    return 0;
}