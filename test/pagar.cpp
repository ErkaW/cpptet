#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int i, j, n; // i = kiri ke kanan, j = atas ke bawah, n = inputan
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<=0||i<n){
                cout << "#";
            }else if(j<=0||j<n){
                cout << "#";
            }else{
                cout << "*";
                };
            };
            cout<<endl;
        };
        
    }
