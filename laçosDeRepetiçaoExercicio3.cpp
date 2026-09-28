#include <iostream>
using namespace std;

int main() {
    double divida, aplicacao;
    int meses = 0;
    cin >> divida >> aplicacao;
    if (aplicacao>=divida) {
        cout <<"Sao necessarios 0 meses para pagar esta divida."<< endl;
        return 0;
    }
    while (aplicacao<divida) {
        divida *= 1.025;
        aplicacao *= 1.04; 
        meses++;
    }
    cout << "Sao necessarios " << meses << " meses para pagar esta divida." <<"\n";

    return 0;
}