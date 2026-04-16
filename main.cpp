#include<iostream>
#include<windows.h>
#include<string>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    int opcao;

    int soma = 0;

    for(int i = 1; i <= 5; i++){
        soma = soma + i;
    }

    std::cout<<"A soma é: "<<soma<<std::endl;
 

   
    return 0;
    }