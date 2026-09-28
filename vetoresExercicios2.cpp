#include <iostream>
#include <vector>

    using namespace std;


int lerVotos(vector<int>& votos){
    int voto;
    int contador = 0;
    
    while (true) {
        cin >> voto;
        if(voto<0){
            break;
        }
        votos.push_back(voto);
        contador++;
    }
    return contador;
}

void apurarEleicao(int totalVotos,const vector<int>&votos){
    vector<int>candidatos(4,0);
    int brancos=0;
    int nulos=0;

    for (int voto:votos){
        if (voto >= 1&&voto<= 4){
            candidatos[voto - 1]++;
        } else if(voto==0){
            brancos++;
        }else{
            nulos++;
        }
    }
    cout<<"Total de votos: "<<totalVotos <<" voto(s)"<<endl;
        for (int i = 0; i < 4; i++){
            cout<<"Votos do candidato "<< (i + 1)<<": "<< candidatos[i]<<" voto(s)"<<endl;
    }
    cout<<"Votos em branco: "<< brancos<< " voto(s)"<< endl;
    cout <<"Votos nulos: "<< nulos<< " voto(s)"<< endl;
}

int main(){
    vector<int> votos;

    int totalVotos = lerVotos(votos);
    
    apurarEleicao(totalVotos,votos);
    
    return 0;
}