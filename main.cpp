#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    for(int i = 1; i <= 10; i++){
        std::cout<<"Este é um loop!!"<<std::endl;
    } 

    
   
    return 0;
    }