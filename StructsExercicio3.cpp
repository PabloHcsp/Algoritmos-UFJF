#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Restaurante{
    string nome;
    string comida;
    double nota;
};

int main(){
    Restaurante r[5];

    for (int i = 0; i < 5; i++){
        getline(cin, r[i].nome);
        getline(cin, r[i].comida);
        cin >> r[i].nota;
        cin.ignore(); 
    }

    int indiceMaior = 0;
    for (int i = 1; i < 5; i++){
        if (r[i].nota > r[indiceMaior].nota){
            indiceMaior = i;
        }
    }

    cout<<"Maior Nota:"<<endl;
    cout<<"-> " << r[indiceMaior].nome<<endl;
    cout<<"-> Comida: " << r[indiceMaior].comida<<endl;
    cout<<"-> Cozinha: " << fixed << setprecision(1) << r[indiceMaior].nota<<endl;

    return 0;
}
