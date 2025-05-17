/*Faça um programa que leia do teclado um numero inteiro n e em seguida leia n numeros reais e calcule a sua média.  ́*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float reais;
    float soma = 0;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> reais;
        soma = soma + reais;
    }

    float media = soma / n;

    cout << fixed << setprecision(2);
    cout << "A média é: " << media << endl;

    return 0;
}