#include <iostream>
/*
== equality
!= not equals
< less than
> greater than
<=less than or equal to
>=greater than or equal to

*/
int main() {
    int value1=7;
    int value2=4;

    if(value1>8){
        std::cout<<"Condition 1: true\n";
    }
    else{
        std::cout<<"Condition 1: false\n";
    }
    if(value1==7 && value2==4){
        std::cout<<"Condition 2: true\n";
    }
    if(value1==7 || value2<3){
        std::cout<<"Condition 3: true\n";
    }
    if(value2!=8){
        std::cout<<"Condition 4: false\n";
    }
    return 0;
}