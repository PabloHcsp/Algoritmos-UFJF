#include <iostream>

using namespace std;

int main(){
            int var1;
            int *ptr; 
            var1 =5;
            ptr=&var1; //& chama por referencia 

            cout<<"valor da variavel pelo nome dela "<<var1<<endl;
            cout<<"endereco do ponteiro com valor de var1 "<<ptr<<endl;//utiliza sem o *
            cout<<"valor atraves do ponteiro"<<*ptr<<endl;//utiliza o * 

             int var2;
            /*var2 = *ptr;

            *ptr=30;

            cout<<var1; */


            var2= 50;

            ptr = &var2;
            cout<<*ptr<<endl;
    return 0;
}