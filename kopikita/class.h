#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <windows.h>

class timedate{
    public:
        void gettime(){
            time_t now = time(0);
            char* dt = ctime(&now);
            cout << "Tanggal dan Waktu: \n" << dt << endl;
        }
};

class menuKopi{
    public:
        int idKopi;
        string namaKopi;
        int hargaKopi;
};

class inputKopi{
    public:
        vector<menuKopi> listKopi;
        void addKopi(int id, string nama, int harga){
            menuKopi kopi;
            kopi.idKopi = id;
            kopi.namaKopi = nama;
            kopi.hargaKopi = harga;
            listKopi.push_back(kopi);
        }
};

class isiListKopi{
    public:
        inputKopi listKopi;
        void isiList(){
            listKopi.addKopi(1, "Americano", 15000);
            listKopi.addKopi(2, "Capuccino", 15000);
            listKopi.addKopi(3, "Van Latte", 18000);
            listKopi.addKopi(4, "Macchiato", 18000);
            listKopi.addKopi(5, "De Tubruk", 10000);
        }
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
            cout << "Tekan Enter untuk melanjutkan...";
            cin.get();
        }
};

class inputBeli{
    public:
        int idPesanan;
        int jumlahPesanan;
        int totalHarga;
};

class hitungBeli{
    public:
        inputBeli beli;
        void hitung(){
            isiListKopi listKopi;
            listKopi.isiList();
            hitungKopi hitung;
            int total = 0;
            for (int i = 0; i < hitung.listPesanan.size(); i++){
                for (int j = 0; j < listKopi.listKopi.listKopi.size(); j++){
                    if (hitung.listPesanan[i].idKopi == listKopi.listKopi.listKopi[j].idKopi){
                        total += listKopi.listKopi.listKopi[j].hargaKopi * hitung.listPesanan[i].jumlahKopi;
                    }
                }
            }
            beli.totalHarga = total;
        }
};

class inputBayar{
    public:
        int uangBayar;
        int kembalian;
};

class hitungBayar{
    public:
        inputBayar bayar;
        void hitung(){
            hitungBeli beli;
            beli.hitung();
            bayar.kembalian = bayar.uangBayar - beli.beli.totalHarga;
        }
};

class namaPembeli{
    public:
        string nama;
};

class inputPembeli{
    public:
        namaPembeli pembeli;
        void input(){
            cin >> pembeli.nama;
        }
};