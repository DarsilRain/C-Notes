#include <iostream>
#include <string>

int main() {
    int values[3];

    values[0] = 88;
    values[1] = 123;
    values[2]=7;

    std::cout << values[0] << std::endl;
    std::cout << values[1] << std::endl;
    std::cout << values[2] << std::endl;

    double nums[4] = {4.6, 2.3, 8.1, 5.10};
    std::cout << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << std::endl;

    std::cout << "array of doubles" << std::endl;
    std::cout << "=================" << std::endl;

    for (int i = 0; i < 4; i++)  {
        std::cout << "Element at index " << i << ": " << nums[i] << std::endl;
    }

    std::cout<< std::endl << "Initializing zero values"<< std::endl;
    std::cout << "=================" << std::endl;
    int numberArray[8]={}; //initializes default values to 0

    for (int i = 0; i < 8; i++)  {
        std::cout << "Element at index " << i << ": " << numberArray[i] << std::endl;

    }

    // Array of strings...
    std::cout<< std::endl << "Initializing string array"<< std::endl;
    std::cout << "=================" << std::endl;
    std::string stringArray[]={"Erik", "Neal", "Faith"}; //no value in stringArry[] means it is dynamic

    for (int i = 0; i < 3; i++)  {
        std::cout << "Element at index " << i << ": " << stringArray[i] << std::endl;

    }

    // Array of 12 times table...
    std::cout<< std::endl << "Initializing 12 times table array"<< std::endl;
    std::cout << "=================" << std::endl;
    int twelves[14];
    for (int i = 0; i < 13; i++)  {
       twelves[i]=i*12;
        std::cout << "Element at index " << i << ": " << twelves[i] << std::endl;

    }

    return 0;
}