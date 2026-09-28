/*Exercício: Jogo de Adivinhação
Crie um programa em C++ onde o computador escolhe aleatoriamente um número entre 1 e 100, e o usuário tenta adivinhar esse número. Para isso, o programa deve:
- Gerar um número aleatório entre 1 e 100.
- Solicitar que o usuário insira um palpite.
- Informar se o palpite é maior, menor ou correto.
- Repetir o processo até que o usuário acerte o número.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int numAleatorio, numSolicitado;
string deNovo;

void aleatorio()
{
    srand(time(nullptr));
    numAleatorio = rand() % 100 + 1;
}
void codigoPrincipal()
{
    cout << "Tente advinhar o numero entre 1 e 100 \n";
    cout << "Insira um numero: \n";
    cin >> numSolicitado;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Digite um numero Valido! voce escreveu uma letra ou palavra. tente novamente \n";
        codigoPrincipal();
    }
    if (numSolicitado > numAleatorio)
    {
        cout << "O numero " << numSolicitado << " e maior que o numero escolhido \n";
    }
    else if (numSolicitado < numAleatorio)
    {
        cout << "O numero " << numSolicitado << " e menor que o numero escolhido \n ";
    }
    else
    {
        cout << "O numero e igual!! Voce Venceu!!! \n "
                "o numero escolhido foi: "
             << numAleatorio;
        exit(0);
    };
}
void repetir()
{
    int tentativas = 5;
    while (tentativas > 0)
    {
        cout << " \n Gostaria de tentar novamente?\n S \n N \n";
        cin >> deNovo;
        cin.clear();
        if (cin.fail())
        {
            cin.ignore();
            cout << "Digite uma Tecla Valida! voce escreveu um caractere errado Digite com S/N. tente novamente \n";
            repetir();
        }
        else if (deNovo == "S")
        {
            cout << "Recomecando \n"
                    "Voce tem: "
                 << tentativas << " Tentativas\n";
            codigoPrincipal();
        }
        else if (deNovo == "N")
        {
            cout << "Fim de Jogo";
            exit(0);
        }
        tentativas--;
    }
}

int main()
{
    aleatorio();
    codigoPrincipal();
    repetir();
    cout << "Suas vidas acabaram Fim de jogo \n"
         << " O numero escolhido era: \n"
         << numAleatorio;
}