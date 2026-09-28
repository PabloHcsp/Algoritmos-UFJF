#include <iostream>
#include <iomanip>
using namespace std;

const int M = 4;

int main(){
    int matriz[M][M];
    int maior, menor;
    int soma_pares = 0, qtd_pares = 0;
    int soma_impares = 0, qtd_impares = 0;


    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            cin >> matriz[i][j];
        }
    }

 
    maior = menor = matriz[0][0];


    for (int i = 0; i < M; i++){
        for (int j = 0; j < M; j++){
            int valor = matriz[i][j];


            if (valor > maior){
                maior = valor;
            }
            if (valor < menor){
                menor = valor;
            }

        
            if (valor % 2 == 0){
                soma_pares += valor;
                qtd_pares++;
            } else{
                soma_impares += valor;
                qtd_impares++;
            }
        }
    }

    double media_pares = qtd_pares > 0 ? (double)soma_pares / qtd_pares : 0;
    double media_impares = qtd_impares > 0 ? (double)soma_impares / qtd_impares : 0;

    cout << "Maior: "<<maior<<endl;
    cout << "Menor: " << menor<<endl;
    cout << fixed<<setprecision(2);
    cout << "Media Pares: "<< media_pares<<endl;
    cout << "Media Impares: "<< media_impares<<endl;

    return 0;
}