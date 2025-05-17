/*Faça uma função para calcular o fatorial de um número inteiro n > 0. Faça um programa que leia um número inteiro do teclado, em seguida utilize a função para calcular o seu fatorial e, por fim, exiba o resultado na tela. int fatorial(int n);*/

#include <iostream>
using namespace std;

int fatorial(int n){
    int fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int n;
    cout << "Digite um numero maior que 0" << endl;
    cin >> n;

    cout << "O fatorial de " << n << "é" << fatorial(n) << endl;

    return 0;
}
