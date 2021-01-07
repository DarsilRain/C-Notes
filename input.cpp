#include <iostream>

int main() {
    std::cout<<"Enter your name: " <<std::flush;
    std::string input;
    std::cin>>input;
    std::cout<<"You entered: "<<input<<std::endl;

    std::cout<<"Enter a number: " <<std::flush;
    int num;
    std::cin>>num;
    std::cout<<"You entered: "<<num<<std::endl;
    return 0;
}