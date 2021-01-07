#include <iostream>
#include <string>
int main() {
    int values[4]={4,7,3,4};
    std::string yo = "Hello";
    std::cout << sizeof(values) << std::endl;

    for(int i=0; i<sizeof(values)/sizeof(int); i++){
        std::cout<< values[i]<<std::endl;
    }
    return 0;
}