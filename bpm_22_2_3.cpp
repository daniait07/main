#include <iostream>
#include <string>
#include <math.h>

int main() {
    std::string str;
    double length;
    std::cin >> length >> str;
    while (length != 1.0)
    {
        str = str.substr(0, std::ceil(length/2.0) - 1) + 
              str.substr(std::ceil(length/2.0), length);
        std::cout << str << std::endl;
        length--;
    }
    system("pause");
}
