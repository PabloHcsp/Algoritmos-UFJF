#include <iostream>
using namespace std;

const int MAX = 5;


void trocarElementos(int matriz[MAX][MAX], int N){
    int primeiro_impar_col = -1;
    int primeiro_par_diag = -1;
    

    for (int j = 0; j < N; j++){
        if (matriz[0][j] % 2 != 0){
            primeiro_impar_col = j;
            break;
        }
    }
    

    for (int i = 0; i < N; i++){
        int j = N - 1 - i; 
        if (matriz[i][j] % 2 == 0){
            primeiro_par_diag = i;
            break;
        }
    }

    if (primeiro_impar_col != -1 && primeiro_par_diag != -1){
        int linha_diag = primeiro_par_diag;
        int coluna_diag = N - 1 - primeiro_par_diag;

        int temp = matriz[0][primeiro_impar_col];
        matriz[0][primeiro_impar_col] = matriz[linha_diag][coluna_diag];
        matriz[linha_diag][coluna_diag] = temp;

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout <<"Nenhuma troca realizada"<< endl;
    }
}

int main(){
    int N;
    int matriz[MAX][MAX];
    

    cin >> N;
    

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> matriz[i][j];
        }
    }
    

    trocarElementos(matriz, N);
    
    return 0;
}