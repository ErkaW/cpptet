#include <iostream>
#include <algorithm>

using namespace std;

int faktorial(int n) {
    int result = 1;
    while (n > 0) {
        result *= n;
        n--;
    }
    return result;
}
int main() {
    int x;
    cin >> x;
    cout << faktorial(x) << endl;
    return 0;
}