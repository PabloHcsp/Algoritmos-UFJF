#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

    void insertionSort(int vet[], int n){
        int i, j, aux;
        for( i=1; i<n; i++){
            aux=vet[i];
            for(j=i; (j>0)&& (aux < vet[j-1]) ; j--){
                vet[j]=vet[j-1];
                
            }vet[j]=aux;
        }

    }



    void bubbleSort(int vet[], int n){
        for(int i=0; i<n;i++){          // o(n)
            for(int j=0; j<n-i-1;j++){  //o(n-i-1)->o(n-i)->o(n-1)
                if(vet[j]>vet[j+1]){    //o(1)
                    swap(vet[j], vet[j+1]);//o(1)
                }
            } //o(n)+o(n-1)+o(1)+o(1) = o(n²)
        }   
    }


    void imprimeVetor(int vet[],int n){
        cout<<"o vetor e : ";
        for(int i =0; i<n; i++){
            cout<<vet[i]<<" ";
        }cout<<endl;
    }


        int numeroAleatorio(int m){
            return rand()%m;
        }


    int *preencheVetor(int n){
        int *vet= new int[n];

        for(int i=0; i<n;i++){
            vet[i]=numeroAleatorio(n);
        }
        return vet;
    }

int main(){
    srand(time(NULL));

    int n =10;
    int *vet = preencheVetor(n);
    int *vet1 = preencheVetor(n);

     cout<<"ANTES da ordenacao:"<<endl;
        imprimeVetor(vet,n);
    bubbleSort(vet,n);
        cout<<endl<<" bubblesort DEPOIS da ordenacao:"<<endl;
            imprimeVetor(vet,n);
    cout<<"ANTES da ordenacao:"<<endl;
        imprimeVetor(vet1, n);

    insertionSort(vet1,n);
        cout<<endl<<" inserctionSort DEPOIS da ordenacao:"<<endl;
            imprimeVetor(vet1, n);


    delete[]vet;
    delete[]vet1;
    return 0;
}