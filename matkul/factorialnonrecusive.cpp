#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x, hasil = 1;
    cin >> x;
    cout << x << "! = ";
    while (x > 1) {
        cout << x << " * ";
        hasil *= x;
        x--;
    }
    cout << x << " = " << hasil << endl;
    return 0;
}
