/*Faça uma função que leia um valor inteiro e positivo do teclado e verifique se ele é primo ou não. Se o número for primo, a função deverá retornar o valor 0; caso contrário, deverá retornar o MENOR divisor exato do número.
Crie um programa que chame a função criada e imprima “Numero primo.” se o retorno for 0, ou então “Menor divisor do numero:X”, onde X deve ser substituído pelo valor de retorno.*/

#include <iostream>
using namespace std;

void primo (int num){
    for (int i = 2; i <= num/2; i++) {
        if (num%i==0){
            cout << "Menor divisor do numero:" << i;
            return;
        }
    }
    
    cout << "Numero primo.";
}


int main(){

    int num;
    cin >> num;
    primo (num);

    return 0;
}