/*Faça uma função que receba um número inteiro n > 0 e determine se este é um número primo. A função deve retornar um valor booleano: true ou false. bool ehPrimo(int n);*/

#include <iostream>
using namespace std;

bool ehPrimo(int n){
    if(n <= 1){
        return false;
    }if (n == 2){
        return true;
    }if (n % 2 == 0){
        return false;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;  
        }
    
    } 
    return true;
}

int main(){
    int n;
    cin >> n;
    
    if (ehPrimo(n)) {
        cout << "O número é primo!" << endl;
    } else {
        cout << "O número não é primo." << endl;
    }

}