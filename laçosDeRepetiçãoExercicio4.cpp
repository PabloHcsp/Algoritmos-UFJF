#include <iostream>
#include <iomanip>
using namespace std;

double somas(int N) {
    if(N<=0){ 
         return 0.0;
    }
    double S=0.0;
    for(int i=1;i<=N;i++){
        if(i==1) {
            cout <<"1";
        }else{
            cout << " + 1/" << i;
        } S += 1.0 / i;
    }
    cout << "\n";
    return S;
}

int main() {
    int N;
        cin >> N;
    double S = somas(N);
     if(N>0){
        cout<<fixed<<setprecision(3)<<S<<endl;}
    
    return 0;
}