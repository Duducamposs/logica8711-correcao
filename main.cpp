#include<iostream>
#include<windows.h>
#include<string>


   int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num;


    std::cout<<"Digite um Número "<<std::endl;
    std::cin>>num;

    std::cout<<num%2<<std::endl;

    if(num % 2 == 0){
        std::cout<<num<<" é par!"<<std::endl;
    }else{
        std::cout<<num<<" é impar!!"<<std::endl;
    }
   
   
    return 0;
    }