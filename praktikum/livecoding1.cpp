#include <iostream>
using namespace std;
int main() {
    int n;
    int l = 1;
    while(l<=5){
        cin >> n;
        if(n%2==0 && n%5!=0){
            l++;
            cout << endl;
        }else if (n%5==0){
            cout << "Kelipatan 5" << endl;
        }else {
            cout << "Bukan angka genap!" << endl;
        }
    }
    return 0;
}