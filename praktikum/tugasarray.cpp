#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin >> a;
    string b;
    cin >> b;
    string c[100];
    int d=0;
    int e;
    for(int i=0;i<a;i++){
        cin >> c[i];
    };
    for(int j=0;j<a;j++){
        if(b==c[j]){
            d++;
            e=j;
            e++;
            break;
        };
    };
    if(d>=1){
        cout << "PARTAI TERBAIK " << b << " ADA PADA NO " << e << endl;
    }else{
        cout << "TIDAK ADA PARTAI YANG DAPAT MEMBANGUN INDONESIA" << endl;
    };   
    return 0;
}
