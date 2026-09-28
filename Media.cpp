#include <iostream>

using namespace std;

void media(){
    int med=0, ent=0,cont=0;
        cin>>ent;
    while(ent!=0){
        med+=ent;
        cin>>ent;
        cont++;
    }
    cout<<"Media = "<<(float)med/cont;
}

int main(){

    media();
    return 0;
}