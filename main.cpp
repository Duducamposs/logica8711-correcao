#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    int tabuada = 7;

    for(int i = 0; i <= 10; i++){
        
        std::cout<<"O resultado de "<<tabuada<<" x "<<i<<" = "<<tabuada * i<<std::endl;
            /* code */
    }
    

   
    return 0;
    }