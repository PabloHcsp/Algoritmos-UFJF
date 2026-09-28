#include <iostream>

using namespace std;

        void troca(int *vetA, int *vetB, int tam){
            int *ptrA =vetA;
            int *ptrB =vetB;
                for(int i = 0; i<tam;i++){
                    int temp;
                    temp=*ptrB;
                    *ptrB=*ptrA;
                    *ptrB=temp;
                    ptrA++;
                    ptrB++;
                }
        }




int main(){
    int n;cin>>n;
    int *pA = new int[n];
    int *pB = new int[n];

for(int i = 0; i<n;i++){



}



    return 0;
}
