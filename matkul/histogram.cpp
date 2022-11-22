#include <iostream>

using namespace std;

// histogram class
class Histogram {
    public:
        Histogram() {
            for (int i = 0; i < 10; i++) {
                data[i] = 0;
            }
        }
        void add(int x) {
            data[x]++;
        }
        void print() {
            for (int i = 0; i < 10; i++) {
                cout << i << " : ";
                for (int j = 0; j < data[i]; j++) {
                    cout << "*";1
                }
                cout << endl;
            }
    
};

int main() {
    Histogram h;
    int x;
    while (cin >> x) {
        h.add(x);
    }
    h.print();
    return 0;
}