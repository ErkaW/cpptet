#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;


int main() {
    string h;
    char p;
    int l=0;
    getline(cin, h);
    cin>>p;
    char pa = toupper(p);
    char pu = tolower(p);
    int k = h.length();
    for(int i = 0;i<=k;i++){
        if(pa==h[i]){
            l++;
        }else if(pu==h[i]){
            l++;
        }else{
            
        }
    }
    if(l>=1){
        cout << "Banyaknya Huruf " << pa << " atau "<< pu << " pada " << h << " adalah : " << l;
    }else{
        cout << "Tidak ada Huruf Yang Dicari";
    }
    
    return 0;
}
