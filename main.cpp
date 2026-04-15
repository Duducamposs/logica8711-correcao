#include<iostream>
#include<windows.h>
#include<string>
#include<thread> //para lidar com o tempo de execução 
#include<chrono> //para definir unidades de tempo(ms, ssegundos)
int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    for(int i = 10; i >= 0; i--){
            std::cout<<"A bomba vai explodir em.."<<i<<std::endl;

            std::this_thread::sleep_for(std::chrono::milliseconds(5000));
            //secunds -> millisecunds
    } 

   
    return 0;
    }