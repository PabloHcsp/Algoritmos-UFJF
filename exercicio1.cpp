#include <iostream>
using namespace std;




float funcao(){
    float maiorque6=0, menorque6=0,num=0;
    int i=0;
        //cin>>num;
    while(i<10){
        cin>>num;
        if(num<6){
            maiorque6++;
        }else{
            menorque6+=num;
        }
        i++;
    }

    cout<<"Quantidade de números maiores do que 6:"<< maiorque6;
    return menorque6;
}

int main(){
   float soma=funcao();

   cout<<"a soma dos números menores ou iguais:"<<soma;

   return 0;
}