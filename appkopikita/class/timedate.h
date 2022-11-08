#include <iostream>
int timedate(){
    time_t now = time(0);
    char* dt = ctime(&now);
    std::cout << "Tanggal dan Waktu: \n" << dt << std::endl;
    return 0;
};