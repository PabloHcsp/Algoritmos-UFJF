#include <iostream>
#include <vector>
using namespace std;
void exemplo1(int n) {
    for(int i = 0; i < n; i++) { // o(n)
        cout << i;               //constante
    }
    for(int j = 0; j < n; j++) {   //o(n)
        cout << j * j;
    }
}
//o(n) + o(n) ->>> o(n)

//soma pois há dois laços diferentes

/*===================================================================*/

void exemplo2(int n) {
    for(int i = 0; i < n; i++) {// o(n)
        for(int j = 0; j < 5; j++) {//o(5)
            cout << i + j;//constante
        }
    }
}// o(n) * o(5) ---> o(5n) ----> o(n)

//multiplica pois há um laço interno e externo e ignora a constante.

/*===================================================================*/

void exemplo3(int n) {
    for(int i = 1; i < n; i *= 2) { //o(log n)
        cout << i; // contante 
    }
}//o(log n) 
//o incrimento multiplica por 2 o i logo se torna o(log n)

/*===================================================================*/

void exemplo4(int n) {
    for(int i = 0; i < n; i++) { //o(n+1)
        for(int j = i; j < n; j++){//o(n+1)
            cout << i + j;//o(1)
        }
    }
}// //o(n+1)*o(n+1) ->>>o(n^2)

/*===================================================================*/

void exemplo1(int n) {
    for (int i = 0; i < n; i++) { //o(n+1)
        cout << i << endl;
    }
} // o(n)

/*===================================================================*/

void exemplo2(int n) {
    for (int i = 0; i < n; i++) {//o(n+1)
        for (int j = 0; j < n; j++) {//o(n+1)
            cout << i << " " << j << endl;
        }
    }
}//o(n^2) 

/*===================================================================*/

void exemplo3(int n) {
    int i = 1;
    while (i < n) {
        cout << i << endl;
        i *= 2; //o(log n)
    }
}//o(log n )

/*===================================================================*/

void exemplo4(int n) {
    for (int i = 0; i < n; i++) { //o(n)
        cout << i << endl;
    }
    for (int j = 0; j < n; j++) {//o(j)
        cout << j << endl;
    }
}//o(n)+o(j) = o(2n) ---->o(n)

/*===================================================================*/
void exemplo5(int n) {
    for (int i = 0; i < n; i++) {//o(n+1)
        for (int j = 0; j < 100; j++){ // o(100+1)
            cout << i << " " << j << endl;
        }
    }
}//o(n+1)*o(100+1) ->>> o(100n+1) ->>>>o(n)

/*===================================================================*/

void exemplo6(int n) {
    for (int i = 0; i < n; i++) { //o(n+1)
        for (int j = i; j < n; j++) {//o(n-1)
            cout << i << " " << j << endl;
        }
    }
}//o(n+1)*//o(n-1) ---> o(n^2)

/*===================================================================*/

void exemplo7(int n) {
    if (n <= 0) return;
    cout << n << endl;
    exemplo7(n - 1);// o(n-1)
}//o(n)

/*===================================================================*/

void exemplo8(int n) {
    for (int i = 0; i < n; i++) {// o(n+1)
        for (int j = 0; j < n; j++) {// o(n+1)
            for (int k = 0; k < n; k++) {//o(n+1)
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
}// o(n+1)*// o(n+1)*// o(n+1) ->>> o(n^3)

/*===================================================================*/
void exemplo9(int n) {
    for (int i = 1; i <= n; i++) {//o(n+1)
        for (int j = 1; j <= n; j += i) {//o(log n)
            cout << i << " " << j << endl;
        }
    }
}//o(n+1)*o(log n ) ->>>> o(n log n)

/*===================================================================*/

void exemplo10(int n) {
    int count = 0;
    for (int i = n; i > 0; i /= 2) {// o(log n)
        for (int j = 0; j < i; j++) {// o(n)
            count++; //o(+1)
        }
    }
    cout << count << endl;
}//o(log n)*o(n) ----> 

/*===================================================================*/

void exemplo11(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) { //o(n)
        for (int j = 0; j < n - i - 1; j++) {//o(n-i-1 +1) -> o(n-1) 
            if (arr[j] > arr[j + 1]) {//o(1)
                swap(arr[j], arr[j + 1]);//o(1)
            }
        }
    }
}//o(n)* o(n-1) -> o(n^2-1) -> o(n^2)

/*===================================================================*/

int exemplo12(int n) {
    if (n <= 1) return n;
    return exemplo12(n - 1) + exemplo12(n - 2);// o(n-1) o(n-2)
}//o(n-1) + o(n-2) ->> o(2n-1)---->  o(n)