/*Escreva uma função que receba um vetor de números inteiros e o seu tamanho, substitua os números negativos ou nulos por 1.
Escreva uma função principal (main) que faça a leitura de um vetor de tamanho 10, chame a função anterior e imprima o vetor.*/

#include <iostream>
using namespace std;

void substitui(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] <= 0) {
            vetor[i] = 1; 
        }
    }
}

int main() {
    const int tamanho = 10;
    int vetor[tamanho]; 

    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    substitui(vetor, tamanho);

    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << endl;
    }
    cout << endl;

    return 0;
}