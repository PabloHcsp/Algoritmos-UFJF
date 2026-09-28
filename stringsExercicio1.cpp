#include <iostream>

using namespace std;


void codificar(char str[],int k){// aqui chamamos uma função void de characteres com vetores [] e uma função inteiro k 
    for(int i =0;str[i]!='\0';i++){ // logo abaixo chamamos um laço for inicializando o contador int i em 0 que é o correto para vetores em sequencia seguimos com a cadeia de caracteres chamada no parametro da função com os vetores na posição de i enquanto ele for diferente "!=" de '\0' que é a finalização da cadeia de characteres ea atualização é um i++ para que o vetor prossiga na contagem
        if(str[i]!=' '){ // aqui temos uma condicional que diz que se a variavel de cadeia str[i] receba um espaço ' ' significa que str[i] tem que receber k + 2 
            str[i] = str [i]+ k +2;//str[i]+=k+2
        }
    } 
    cout<<str;//imprime o str (nao é nessesario colocar o vetor)
}

int main(){
    char str[101]; // estabelecemos um valor de 100 para a cadeia, porem utilização 101 para que haja um '\0' caso seja 100 a cadeia iria até 99
    int k;
    cin.getline(str,101);// chamamos sem bug a string por cin.getline nome da variavel e tamanho de vetor.
    cin>>k;// cin do k 
    codificar(str,k);// chamada da funcao levando str e k ( nao é preciso o tamanho do vetor)
    return 0;
}