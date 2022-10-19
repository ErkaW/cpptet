#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
void state0(),state2(),state3(),state1(),state5(),state4();
void state0(){
    // Tes Awal
    state1();
}
void state1(){
    system("cls");
    cout << "Lampu Merah" << endl;
    Sleep(1000);
    if(GetAsyncKeyState(VK_SPACE)){
        state4();
    }
    state2();
}
void state2(){
    system("cls");
    cout << "Lampu Hijau" << endl;
    Sleep(1000);
    if(GetAsyncKeyState(VK_SPACE)){
        state4();
    }
    state3();
}
void state3(){
    system("cls");
    cout << "Lampu Kuning" << endl;
    Sleep(1000);
    if(GetAsyncKeyState(VK_SPACE)){
        state4();
    }
    state1();
}
void state4(){
    if(GetAsyncKeyState(VK_SPACE)){
        system("cls");
        cout << "Lampu Kuning" << endl;
        Sleep(1000);
        state5();
    }
    state1();
}
void state5(){
    if(GetAsyncKeyState(VK_SPACE)){
        system("cls");
        cout << "Lampu Mati" << endl;
        Sleep(1000);
        state4();
    }
    state1();                                 
}
int main() {
    state0();
}
