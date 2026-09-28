#include <iostream>

using namespace std;


int main(){
    int n=10;
    int*pi = new int[n];
    int *p2 = pi;

        for(int i = 0; i<n; i++){
           if(!(cin>>*p2)){
            delete[]pi;
            return 1;
           }p2++;
        }
        for(int i =0; i<n; i++){
            cout<<"No endereco "<< (pi +1)<< " esta "<<pi[i]<<endl;
        }
        delete []pi;

    return 0; 
}