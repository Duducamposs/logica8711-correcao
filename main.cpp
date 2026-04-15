#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    for(int i = 10; i >= 0; i--){
        std::cout<<"A bomba vai explodir em.."<<i<<std::endl;
    } 

    
   
    return 0;
    }