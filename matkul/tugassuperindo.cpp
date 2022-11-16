#include <iostream>
#include <string>
#include <vector>

using namespace std;

string daftarbarang(int x){
    string Pilihan = "";
    switch (x)
    {
        case 1: Pilihan = "1/Mie Indomie/3000"; break;
        case 2: Pilihan = "2/Susu SKM/5000"; break;
        case 3: Pilihan = "3/Jeruk/7000"; break;
        case 4: Pilihan = "4/Kopi Bubuk/8000"; break;
        case 5: Pilihan = "5/Apel/9000"; break;
    default:
        Pilihan = "";
        break;
    }
    return Pilihan;
}

int main(){
    
}
