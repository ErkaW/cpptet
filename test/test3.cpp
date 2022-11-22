#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int x;
    cin >> x;
    // ifstream file daftar.txt but only line 3
    ifstream file("daftar.txt");
    string line;
    int i = 0;
    while (getline(file, line)) {
        if (i == x) {
            cout << line << endl;
        }
        i++;
    }
    file.close();
    return 0;
}