/*Escreva uma função que receba como parâmetro um vetor e uma matriz de valores reais com dimensões compatíveis e multiplique o vetor pela matriz. O resultado final deve ser colocado no próprio vetor de entrada.
Escreva uma função principal (main) para ler um vetor de três posições e uma matriz quadrada 3×3, chamar a função desenvolvida no item anterior e imprimir na tela o resultado da multiplicação. Utilize 1 casa decimal nas impressões.*/

#include <iostream>
#include <iomanip>
#define TAM 3
using namespace std;

void Resultado(float vet[], int mat[3][3]) {
    float resultado[TAM] = {0};  

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i] += vet[j] * mat[j][i];
        }
    }

    for (int i = 0; i < TAM; i++) {
        vet[i] = resultado[i];
    }
}

int main() {

    float vet[TAM];
    int mat[TAM][TAM];


    for (int i = 0; i < TAM; i++) {
        cin >> vet[i];
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cin >> mat[i][j];
        }
    }

    Resultado(vet, mat);

    cout << "Resultado = [ ";
    cout << setprecision(1) << fixed;
    for (int i = 0; i < TAM; i++) {
        cout << vet[i];
        if (i < TAM - 1) {
        cout << " ";
        }
    }
    cout << " ]" << endl;

    return 0;
}