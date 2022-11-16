#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <windows.h>

using namespace std;

class showMenu{
    public:
        void show(){
            isiListKopi listKopi;
            listKopi.isiList();
            cout << "||  DAFTAR MENU KOPI  ||" << endl;
            cout << "======================================" << endl;
            cout << "ID\tNAMA\t\tHARGA" << endl;
            cout << "======================================" << endl;
            for (int i = 0; i < listKopi.listKopi.listKopi.size(); i++){
            cout << listKopi.listKopi.listKopi[i].idKopi << "\t" << listKopi.listKopi.listKopi[i].namaKopi << "\t" << listKopi.listKopi.listKopi[i].hargaKopi << endl;
            }
            cout << "======================================" << endl;
        };
};

class pesananKopi{
    public:
        int idKopi;
        int jumlahKopi;
};

class hitungKopi{
    public:
        vector<pesananKopi> listPesanan;
        void addPesanan(int id, int jumlah){
            pesananKopi pesanan;
            pesanan.idKopi = id;
            pesanan.jumlahKopi = jumlah;
            listPesanan.push_back(pesanan);
        }
};


class System{
    public:
        void clrscr(){
            system("cls");
        }
        void slp(){
            Sleep(1000);
        }
        void pause(){
            system("pause");
        }
};


class Header{
    public:
        System system;
        void header(){
            system.clrscr();
            cout << "======================================" << endl;
            cout << "||  SELAMAT DATANG DI KOPIKITA  ||" << endl;
            cout << "======================================" << endl;
        }
};

class headerStruk{
    public:
        System system;
        void header(){
            system.clrscr();
            cout << "======================================" << endl;
            cout << "||  TERIMA KASIH TELAH BERBELANJA ||" << endl;
            cout << "||  DI KOPIKITA  ||" << endl;
            cout << "======================================" << endl;
            cout << "STRUK PEMBELIAN" << endl;
            cout << "======================================" << endl;
        }
};

void menuUtama(){
    Header header;
    header.header();
    timedate time;
    time.gettime();
    pesanan pesan;
    pesan.pesan();
    headerStruk headerStruk;
    headerStruk.header();
    time.gettime();
}

int main(){
    menuUtama();
    return 0;
}