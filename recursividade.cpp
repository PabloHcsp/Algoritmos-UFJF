#include <iostream>

using namespace std;

int auxFib(int atual, int ant, int n)
{
    if(n == 1)
    return atual;
else
return auxFib(atual+ant, atual, n-1);
}

int fib(int n)
{
return auxFib(1, 0, n);
}


int main(){
        cout<< fib(100);
    return 0;
}