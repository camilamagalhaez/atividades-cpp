/*Escreva uma função em C++ chamada maiorValorPar que recebe dois parâmetros: um vetor de números reais (float) e um número inteiro n que representa o tamanho desse vetor. A função deve retornar o maior valor par encontrado no vetor. float maiorValorPar(int n, float vet[]);*/

#include <iostream>
using namespace std;

float maiorValorPar(int n, float vet[]) {
    float maiorPar;
    bool encontrouPar = false; 

    for (int i = 0; i < n; i++) {

        if (vet[i] == (int)vet[i] && ((int)vet[i]) % 2 == 0) {
            if (!encontrouPar || vet[i] > maiorPar) {
                maiorPar = vet[i];
                encontrouPar = true;
            }
        }
    }

    if (encontrouPar) {
        return maiorPar;
    } else {
        return -1; 
    }
}


int main() {
    int n;
    cin >> n;
    float vet[n];

    for(int i = 0; i < n; i++){ //Lendo vetor
        cin >> vet[i];
    }

    float resultado = maiorValorPar(n, vet);

    if (resultado != -1) {
        cout << "O maior valor par é: " << resultado << endl;
    } else {
        cout << "Nenhum valor par foi encontrado." << endl;
    }

    return 0;
}

