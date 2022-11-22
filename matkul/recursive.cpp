#include <iostream>
#include <algorithm>

using namespace std;

class Recursive {
    public:
        int faktorial(int n) {
            if (n <= 1) {
                cout << n << " = ";
                return 1;
            } else {
                cout << n << " * ";
                return n * faktorial(n - 1);
            }
        }
};

int main() {
    Recursive r;
    int x;
    cin >> x;
    cout << x << "! = "; 
    cout << r.faktorial(x) << endl;
    return 0;
}