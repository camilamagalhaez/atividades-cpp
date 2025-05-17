/*Defina a estrutura "Medidas" para armazenar o peso a altura de uma pessoa. Faça um programa que leia o peso e a altura de seis pessoas e imprima na tela a média das medidas do grupo.*/

#include <iostream>
#include <iomanip>
#define PESSOAS 6

using namespace std;

struct Medidas {
    float peso;
    float altura;
};

int main() {
    Medidas pessoas[PESSOAS];
    float somaPesos = 0, somaAlturas = 0;

    for (int i = 0; i < PESSOAS; i++) {
        cin >> pessoas[i].peso;
        cin >> pessoas[i].altura;
        somaPesos += pessoas[i].peso;
        somaAlturas += pessoas[i].altura;
    }

    float mediaPesos = somaPesos / PESSOAS;
    float mediaAlturas = somaAlturas / PESSOAS;

    cout << setprecision(2) << fixed;
    cout << "Média Pesos: " << mediaPesos << " kg" << endl;
    cout << "Média Alturas: " << mediaAlturas << " m" << endl;

    return 0;
}
