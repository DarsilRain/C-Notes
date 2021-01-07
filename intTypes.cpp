#include <iostream>
#include <limits>

int main() {
    int value = 39434;
    std::cout<<value<<std::endl;

    std::cout << "Max int value: "<< INT_MAX<<std::endl;
    std::cout << "Min int value: "<<INT_MIN<<std::endl;

    long int lValue = 2398437498347;
    std::cout<< lValue<<std::endl;

    short int sValue=234;
    std::cout<<sValue<<std::endl;

    std::cout<<"Size of int: "<<sizeof(int)<<std::endl;

    unsigned int uValue=394824893;
    std::cout<<uValue<<std::endl;

    return 0;
}