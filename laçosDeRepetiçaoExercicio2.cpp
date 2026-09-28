#include <iostream>

using namespace std;

int impares(int n1,int n2){
    int inicio, fim, contador=0;

    if(n1<n2){
        inicio=n1;
        fim=n2;
    }else{
        inicio=n2;
        fim=n1;
    }
    int i= inicio;
    while(i<=fim){
        if(i%2!=0){
        contador++;}
        i++;}
    return contador;
}

int main(){
    int n1=0,n2=0;
    cin>>n1>>n2;
    cout<<"Quantidade de impares: "<<impares(n1,n2);
    return 0;
}