#include <iostream>
#include <cctype>

using namespace std;
  const int MAX = 50;
int main() {

    char texto[MAX];
    char vogais[MAX];
    char consoantes[MAX];
    int contVogais = 0, contConsoantes = 0;

    cin.getline(texto, MAX);

    for (int i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]);


        if (isalpha(texto[i])){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vogais[contVogais] = texto[i];
                contVogais++;
            } else{
                consoantes[contConsoantes] = texto[i];
                contConsoantes++;
            }
        }
    }
    vogais[contVogais] = '\0';
    consoantes[contConsoantes] = '\0';

    cout << "Vetor de vogais: " << vogais << endl;
    cout << "Vetor de consoantes: " << consoantes << endl;

    return 0;
}