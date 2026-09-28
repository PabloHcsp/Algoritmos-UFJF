#include <iostream>
#include <vector>

using namespace std;

void imprimeMenoresQueDez(const vector<int>& vetor) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] < 10) {
            cout << "Indice: " << i << ", Valor: " << vetor[i] << endl;
        }
    }
}

int main(){
    vector<int> vetor(5);
    
    for (int i = 0; i < 5; ++i) {
        cin >> vetor[i];
    }
    
    imprimeMenoresQueDez(vetor);
    
    return 0;
}






char x[6]= {'p','a','b','l','o','\0'};
string y = "pablo";