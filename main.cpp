#include<iostream>
#include<windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);//
    SetConsoleCP(CP_UTF8);

    int pagamento;
    // int opcaoPagamento;
    int qtdParafuso;
    float valorParafuso = 1.40;
    float valorTotalParafuso;
    float desconto;
    float juros;

    std::cout<<"Digite a quantidade de parafuso desejado: "<<std::endl;
    std::cin>>qtdParafuso;

    valorTotalParafuso = qtdParafuso * valorParafuso;
    
    std::cout<<"qual sua forma de pagamento: "<<std::endl;
    std::cout<<"--- 1 - Pix"<<std::endl;
    std::cout<<"--- 2 - Dinheiro"<<std::endl;
    std::cout<<"--- 3 - Cartão"<<std::endl;
    std::cin>>pagamento;

    if(pagamento == 1){
        std::cout<<"Sua compra ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
    }else if(pagamento == 2){
        desconto = valorTotalParafuso * 0.90;
        std::cout<<"Sua compra ficou no valor de R$: "<<desconto<<std::endl;
    }else{
        juros = valorTotalParafuso * 1.10;
        std::cout<< "Sua compra ficou no valor total de R$: "<<valorTotalParafuso<<std::endl;
    }
 
   
    return 0;
    }