#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>


const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y  %X", &tstruct);

    return buf;
}

int main() {
    std::cout << "TGL bayar : " << currentDateTime() << std::endl;
    getchar();  // wait for keyboard input
}
