#include <iostream>
#include <vector>
using namespace std;

int main(){
    const int TAMANHO = 20;
    vector<int> vetor(TAMANHO);
    
    for (int i=0;i<TAMANHO; i++){
        vetor[i] = i;
    }
    
    int posicao;
            cin >> posicao;
    
    if (posicao<0||posicao>10){
        cout << "Entrada fora do limite estipulado" << endl;
            return 1;
    }

    for (int i =TAMANHO-1;i>posicao;i--){
        vetor[i]=vetor[i - 1];
    }
    int valor;
         cin >> valor;
            vetor[posicao] = valor;
    
    for (int i=0;i<TAMANHO;i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";
    
    return 0;
}