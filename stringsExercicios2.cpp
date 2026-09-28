#include <iostream>

using namespace std;
 const int TAMANHO_MAXIMO = 1000;
void cifraDeCesar(char mensagem[],int tamanho, int k){
    for (int i = 0; i < tamanho; i++){
        mensagem[i] = mensagem[i] + k;
    }
}
int main(){

    char mensagem[TAMANHO_MAXIMO];
    int k;
    cin.getline(mensagem, TAMANHO_MAXIMO);
    cin >> k;
    int tamanho = 0;
    while (mensagem[tamanho] != '\0') {
        tamanho++;
    }
    cifraDeCesar(mensagem, tamanho, k);
    
    cout << "Mensagem criptografada: " << mensagem << endl;
    
    return 0;
}