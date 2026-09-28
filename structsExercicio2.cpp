#include <iostream>
#include <cmath>
using namespace std;

struct Ponto{
    int x, y;
};

double distancia(Ponto p){
    return sqrt(p.x * p.x + p.y * p.y);
}

Ponto maisProximo(Ponto a, Ponto b){
    if(distancia(a) <= distancia(b))
        return a;
    else
        return b;
}

int main(){
    Ponto p[4];
    for (int i = 0; i < 4; i++){
        cin >> p[i].x >> p[i].y;
    }

    Ponto prox = maisProximo(p[0], p[1]);
    prox = maisProximo(prox, p[2]);
    prox = maisProximo(prox, p[3]);

    cout<<"Mais Próximo: (" << prox.x << "," << prox.y << ")"<< endl;

    return 0;
}
