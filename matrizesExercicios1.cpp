#include <iostream>
using namespace std;

const int TAM = 10;

// Função que encontra e imprime a localização do maior valor na matriz
void encontrarMaior(int matriz[TAM][TAM]) {
    int maior = matriz[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;
    
    // Percorre toda a matriz para encontrar o maior valor
    for (int i = 0; i<TAM;i++){
        for (int j = 0;j<TAM; j++){
            if (matriz[i][j]>maior){
                maior=matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    
    // Imprime a localização do maior valor (linha e coluna)
    cout<<linha_maior<<" "<<coluna_maior<<endl;
}

// Função principal
int main(){
    int matriz[TAM][TAM];
    
    // Lê os elementos da matriz
    for (int i = 0;i<TAM;i++) {
        for (int j = 0; j<TAM;j++) {
            cin >> matriz[i][j];
        }
    }
    
    // Chama a função para encontrar e imprimir o maior valor
    encontrarMaior(matriz);
    
    return 0;
}