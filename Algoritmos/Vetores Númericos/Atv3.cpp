/*Faça uma função que receba como parâmetros um vetor de tamanho 5 e um número inteiro entre 0 e 99999 e inicialize o vetor com cada dígito do número. Por exemplo, se o número for 4723, o vetor deverá, ao final, conter os valores {0,4,7,2,3}. Faça também um programa principal que declare um vetor de tamanho 5, leia um número inteiro entre 0 e 99999, chame a função anterior e imprima o vetor resultante.*/

#include <iostream>
#include <iostream>
using namespace std;

    void preencheVetor(int vetor[5], int num) {
        if (num < 0 || num > 99999) {
            cout << "Entrada fora do limite estipulado" << endl;
            return;
    }

    for (int i = 4; i >= 0; i--) {
        vetor[i] = num % 10;
        num /= 10;
    }
}

int main() {
    int vetor[5], num;
    cin >> num;
    preencheVetor(vetor, num);

    if (num >= 0 && num <= 99999) {
        cout << "Vetor obtido: {" << vetor[0] << "," << vetor[1] << "," << vetor[2] << "," << vetor[3] << "," << vetor[4] << "}" << endl;
    }

    return 0;
}