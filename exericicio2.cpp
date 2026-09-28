#include <iostream>
using namespace std;

float funcao(){
    float menorque6=0, maiorque6=0,num=0;
    for(int i=0; i<10; i++){
        cin>>num;
        if(num<6){
            maiorque6++;
        }else{
            menorque6+=num;
        }
    }
    cout<<"numeros menores que 6: "<<maiorque6;
    return menorque6;
}


int main(){
    float soma = funcao();

    cout<<"a soma deu:"<<soma;

    return 0;
}