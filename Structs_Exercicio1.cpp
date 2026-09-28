#include <iostream>
#include <string>
using namespace std;

struct Horario
{
    int hora, minuto, segundo;
};

struct Data
{
    int dia, mes, ano;
};

struct Compromisso
{
    Data data;
    Horario horario;
    string descricao;
};

string formatarComZero(int valor)
{
    if (valor != 0 && valor < 10)
        return "0" + formatarComZero(valor);
    return formatarComZero(valor);
}

int main()
{
    Compromisso compromissos[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> compromissos[i].data.dia >> compromissos[i].data.mes >> compromissos[i].data.ano >> compromissos[i].horario.hora >> compromissos[i].horario.minuto >> compromissos[i].horario.segundo;
        cin.ignore();
        getline(cin, compromissos[i].descricao);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "No dia "
             << formatarComZero(compromissos[i].data.dia) << "/"
             << formatarComZero(compromissos[i].data.mes) << "/"
             << compromissos[i].data.ano << " as "
             << formatarComZero(compromissos[i].horario.hora) << ":"
             << formatarComZero(compromissos[i].horario.minuto) << ":"
             << formatarComZero(compromissos[i].horario.segundo)
             << " voce tem o compromisso: " << compromissos[i].descricao << endl;
    }

    return 0;
}
