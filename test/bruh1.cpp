#include <iostream>

using namespace std;

int main(){
    string kopi[10] = {"Americano","Black Coffee","Original Coffee","Maqiato\t","Coco Maqiato","Vanilla Latte","Hazelnut Latte","Coffee Latte","Capuccino","Kopi Tubruk"};
    for (int i = 0; i < 10; i++) {
        cout << kopi[i] << endl;
    }
    return 0;
}