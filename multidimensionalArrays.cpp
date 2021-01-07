#include <iostream>
#include <string>

int main() {
    std::string animals[2][3] = {
        {"Bat", "Moose", "Bear" },
        {"Dragon", "Betta", "Moss Ball" }
    };

    for(int i=0;i<2; i++){
        for(int j=0; j<3; j++){
            std::cout << animals[i][j] << std::endl;
        }
        
    }

    std::cout << std::endl << "\t \t \t \t Multiplication Table" << std::endl;
    std::cout <<"========================================================================================" << std::endl;

        int nums[10][10];
        int result;

    for(int i=0;i<10; i++){
        for(int j=0; j<10; j++){
            nums[i][j]= (i+1)*(j+1);
            std::cout<< "\t" << nums[i][j];
        }
        std::cout<<std::endl;
    }

    return 0;

}