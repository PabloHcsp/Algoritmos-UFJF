/* #include <iostream>
using namespace std;

        int fun(int n){

            if(n==1||n==0){
                return 1;
            }
            else{
            return n* fun(n-1);
        }
    }





int main(){
    int x=0;
    x=fun(5);
   cout<<x;
    return 0;
} */

#include <iostream>

using namespace std;

int total = 10;

void fun(int n, )
{
    if (n == total)
    {
        return fun(n / 2);
    }
    else if (n > total)
    {
        return 0;
    }
    else
    {
        return n;
    }
}

int main()
{
    int x = fun(5);
    cout << x;
}