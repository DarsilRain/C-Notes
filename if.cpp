#include <iostream>

int main() {
    
    std::string password = "hello";

    std::cout<<"Enter the password> ";

    std::string input;
    std::cin>>input;

    //std::cout<<"you said: '"<<input<<"'"<<std::endl;

    if(input == password){
        std::cout<<"Password accepted, welcome to the database... \n";

        std::cout << "1.\tAdd new record."<<std::endl;
        std::cout <<"2.\tDelete record."<<std::endl;
        std::cout <<"3.\tView record."<<std::endl;
        std::cout <<"4.\tSearch record."<<std::endl;
        std::cout <<"5.\tQuit."<<std::endl;

        std::cout<<"Enter your selection>";

        int value;
        std::cin>>value;
        if(value==1){
            std::cout<<"Adding new record..."<<std::endl;    
        }
        else if(value ==2){
            std::cout<<"Deleting record..."<<std::endl;   
        }
        else if(value ==3){
            std::cout<<"Viewing..."<<std::endl;   
        }
        else if(value ==4){
            std::cout<<"Searching..."<<std::endl;   
        }
        else if(value ==5){
            std::cout<<"Quitting..."<<std::endl;   
        }
        else{
            std::cout<<"invalid option\n";
        }
    }
    else {
        std::cout<<"Access denied\n";
    }



    return 0;
}