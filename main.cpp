#include<iostream>
#include<windows.h>
#include<string>


   int main(){
    //brAmount: valor em reais / exchangesRate: taxa de Cãmbio / usdAmount: Valor em dólar
    double brAmount, exchangeRate, usdAmount;

    std::cout<<"----- Currency Convertee: BRL to USD -----"<<std::endl;

    //entrada da taxa de cãmbio (quanto vale 1 dolar hoje)
    std::cin>>exchangeRate;

    //Entrada da quantidade em Reais que a pessoa deseja converter
    std::cout<<"Enter the amount in BRL(R$): "<<std::endl;
    std::cin>>brAmount;

    //verificação lógica; garante que o valor informado seja positivo
    if(brAmount > 0){
        //cãlculo; dividi o montante em reais pela taxa de cãmbio
        usdAmount =brAmount / exchangeRate;
        std::cout<<"you will have $"<<usdAmount<<"US dollars. "<<std::endl;
    }else{
        //Mensagem de erro caso o valor sja zero ou negativo
        std::cout<<"Error: Please enter a valid amount greater than zero. "<<std::endl;
    }
    return 0;
    }