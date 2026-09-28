#include <iostream>
#include <string>

using namespace std;

int contarEspacos(const string &str)
{
    int contador = 0;
    for (char c : str)
    {
        if (c == ' ')
        {
            contador++;
        }
    }
    return contador;
}
int main()
{
    string entrada;
    getline(cin, entrada);

    int numEspacos = contarEspacos(entrada);

    cout << "Espaços: " << numEspacos << endl;

    return 0;
}