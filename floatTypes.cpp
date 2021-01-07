#include <iostream>
#include <iomanip>

int main() {
  
    float fValue=76.4;
    std::cout<< sizeof(float)<<std::endl;
    std::cout<< std::fixed << fValue<<std::endl;
    std::cout<<std::setprecision(20)<<std::fixed<<fValue<<std::endl;

    double dValue = 76.4;
    std::cout<<std::setprecision(20)<<std::fixed<<dValue<<std::endl;

    long double lValue=12345678987654321;
    std::cout<< sizeof(long double)<<std::endl;
    std::cout<<std::setprecision(20)<<std::fixed<<lValue<<std::endl;
    return 0;
}