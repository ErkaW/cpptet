#include <iostream>
#include <algorithm>

using namespace std;

class Recursive {
    public:
        int faktorial(int n) {
            if (n == 0) {
                return 1;
            } else {
                return n * faktorial(n - 1);
            }
        }
        int deret(int n) {
            if (n == 0) {
                return 0;
            } else {
                return n + deret(n - 1);
            }
        }
};

int main() {
    Recursive r;
    int x;
    cin >> x;
    cout << r.faktorial(x) << endl;
    cout << r.deret(x) << endl;
    return 0;
}