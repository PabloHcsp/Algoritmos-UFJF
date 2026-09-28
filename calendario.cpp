#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
using namespace std;

bool anoBissexto(int ano) {
    return (ano % 400 == 0) || (ano % 100 != 0 && ano % 4 == 0);
}
int diasNoMes(int mes, int ano) {
    if (mes == 2) {
        return anoBissexto(ano) ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}
int primeiroDiaDoAno(int mes, int ano) {
    tm tempoEm = {0, 0, 0, 1, mes - 1, ano - 1900};
    time_t tempoTemporario = mktime(&tempoEm);
    tm const *time_out = localtime(&tempoTemporario);
    return time_out->tm_wday;
}

void printCalendario(int mes, int ano) {
    cout << "      " << setw(2) << mes << "/" << ano << endl;
    cout << " Dom Seg Ter Qua Qui Sex Sab" << endl;

    int dias = diasNoMes(mes, ano);
    int primeiroDia = primeiroDiaDoAno(mes, ano);
    int dia = 1;
    for (int i = 0; i < primeiroDia; ++i) {
        cout << "    ";
    }
    while (dia <= dias) {
        cout << setw(4) << dia;
        if (++primeiroDia > 6) {
            cout << endl;
            primeiroDia = 0;
        }
        dia++;
    }
    cout << endl;
}

int main() {
    int mes,ano;
    cout<<"Digite a data: mes depois ano: \n";

    cin>>mes>>ano;
    printCalendario(mes, ano);
    return 0;
}