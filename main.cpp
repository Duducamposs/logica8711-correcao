#include<iostream>
#include<windows.h>
#include<string>

int main(){

    int choice;
    float temp, converted;

    std::cout<<"----- temperatura converter ----"<<std::endl;
    std::cout<<"1: celsius to fahrenheit"<<std::endl; 
    std::cout<<"2: fahrenheit to celsius"<<std::endl;
    std::cout<<"choose an option (1 or 2): "<<std::endl;
    std::cin>>choice;
   
    if(choice == 1){
        std::cout<<"Enter temperatura in celsius: "<<std::endl;
        std::cin>>temp;
        converted = (temp *1.8) + 32;
        std::cout<<temp<<"C is "<<converted<< " F. "<<std::endl;
    } else if (choice == 2){
        std::cout<<"Enter temperatura in fahrenheit: "<<std::endl;
        std::cin>>temp;
        converted = (temp - 32) / 1.8;
        std::cout<<temp<<"F is "<<converted<<"C. "<<std::endl;
    } else{
        std::cout<<"invalid option! Please restart. "<<std::endl;
    }
    return 0;
    }