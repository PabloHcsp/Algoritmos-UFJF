#include <iostream>

using namespace std;

void idadeEmDias(int ano, int mes, int dia) {
    int totalDias = (ano * 365) + (mes * 30) + dia;
    cout << totalDias <<endl;
}

int main() {
    int ano, mes, dia;
    cin >> ano >> mes >> dia; 
    idadeEmDias(ano, mes, dia);

    return 0;
}
