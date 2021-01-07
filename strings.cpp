#include <iostream>
//don't have to #include <string>
int main() {
    std::string value = "This is a string ";
    std::string value2 = "This is another string";
    std::string value3=value+value2; //concatination

    std::cout<<value3<<std::endl;


    return 0;
}