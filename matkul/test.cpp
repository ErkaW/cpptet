#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int getLineCount() {
    ifstream file("produk.txt");
    string line;
    int i = 0;
    while (getline(file, line)) {
        i++;
    }
    file.close();
    return i;
}
int maxrecords = getLineCount();
string records [100];
string getRecord(int x) { 
    return records[x-1];
}
void pilih(){
    ifstream file("produk.txt");
    string line;
    int i = 0;
    while (getline(file, line)) {
        records[i] = line;
        i++;
    }
    file.close();
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
int banyakPilihan(){
    int banyak = 1;
    banyak += getLineCount();
    return banyak;
}
int ID[100];
string Nama[100];
int Harga[100];
void deMenu(){
    for(int i=1;i<=getLineCount();i++){
        vector<string> data = split(getRecord(i), '/');
        ID[i] = stoi(data[0]);
        Nama[i] = data[1];
        Harga[i] = stoi(data[2]);
    };
}
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
int beli(int id, int banyak){
    int total = Harga[id] * banyak;
    return total;
}
void menu(){
    cout << "======================================" << endl;
    cout << "||            Daftar Menu           ||" << endl;
    cout << "======================================" << endl;
    for(int i=1;i<=getLineCount();i++){
        cout << "|| " << ID[i] << "  || " << Nama[i] << "\t\t|| " << Harga[i] << "  ||" << endl;
    }
    cout << "======================================" << endl;
}
int main() {
    pilih();
    deMenu();
    menu();
    return 0;
}