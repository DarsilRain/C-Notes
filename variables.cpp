#include <iostream>

int main() {
    //std::cout<<"Hello"<<std::endl;

    int numberOfCats=5;
    int numberOfDogs=17;
    std::cout<<"Number of cats: "<< numberOfCats<<std::endl;
    std::cout<<"Number of dogs: "<< numberOfDogs<<std::endl;

    std::cout<<"Total number of animals: "<< numberOfDogs+numberOfCats<< std::endl;
    std::cout<<"New dog acquied!"<<std::endl;
    numberOfDogs+=1;
    std::cout<<"New number of dogs: "<< numberOfDogs<<std::endl;
    return 0;
}