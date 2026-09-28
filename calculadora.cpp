#include <iostream> 

using namespace std;

int fun(int n){
    int cont=1,soma =0;
    while (cont<=n){
        if(cont%2!=0){
             soma+=cont;
        }cont++;
    } return soma;
}

int main(void){
    int n=0;
    cin>>n;
    cout<<fun(n);
}
