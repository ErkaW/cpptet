#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "isimenu.h"

using namespace std;

int listmenu() {
    int listPilih;
    string Pilihan = "";
    cout << "1. Americano" << endl;
    cout << "2. Capuccino" << endl;
    cout << "3. Vanilla Latte" << endl;
    cout << "4. Macchiato" << endl;
    cout << "5. Kopi Tubruk" << endl;
    cout << "Pilih Menu Kopi: ";
    cin >> listPilih;
    cout << isimenu(listPilih);
    cout << Pilihan << endl;
    return 0;
}