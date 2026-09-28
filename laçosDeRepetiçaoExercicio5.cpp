#include <iostream>
#include <iomanip>
using namespace std;

void monitorarVacinacao(int dosesDisp,int idadeMin,int idadeMax) {
    int idade,totalPessoas=0,somaIdades=0;

    while(dosesDisp>0) {
        cin >> idade;

        if (idade<idadeMin||idade>idadeMax) {
            break;
        }

        totalPessoas++;
        somaIdades+=idade;
        dosesDisp--;
    }
    cout<<"Quantidade: "<<totalPessoas<<endl;

    if(totalPessoas>0){
        double media = static_cast<double>(somaIdades)/totalPessoas;
        cout <<"Media das idades: "<<fixed<<setprecision(2)<<media<<endl;
    }else{
        cout <<"Media das idades: 0.00"<<"\n";
    }
}

int main() {
    int dosesDisponiveis,idadeMinima,idadeMaxima;
    cin>>dosesDisponiveis>>idadeMinima>>idadeMaxima;

    monitorarVacinacao(dosesDisponiveis, idadeMinima, idadeMaxima);

    return 0;
}