#include <iostream>
#include <string>

using namespace std;

string isimenu(int listPilih){
    string Pilihan = "";
    switch (listPilih)
    {
        case 1: Pilihan = "1/Americano/15000/50"; break;
        case 2: Pilihan = "2/Capuccino/15000/50"; break;
        case 3: Pilihan = "3/Vanilla Latte/18000/50"; break;
        case 4: Pilihan = "4/Macchiato/18000/50"; break;
        case 5: Pilihan = "5/Kopi Tubruk/8000/50"; break;
    default:
        break;
    }
    return Pilihan;
}