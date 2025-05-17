/*Faça uma função que recebe como parâmetros duas strings, strA e strB, e um número inteiro k. A função deve copiar os k primeiros caracteres de strB para strA de forma invertida. Se k for maior que o tamanho da string, toda a string strB deverá aparecer invertida em strA. Assuma que as duas strings foram alocadas com o mesmo tamanho. Exemplo: se strB="ABCDE" e k=3, a string strA deverá receber "CBA". Se strB="ABCDE" e k=10, a string strA deverá receber "EDCBA".
Faça um programa principal que declare duas strings strA e strB de tamanho máximo 30, leia strB e um inteiro k. A seguir chame a função anterior e imprima o conteúdo de strA.*/

#include <iostream>
#include <string>
using namespace std;

void copiaInvertido(char strA[], const char strB[], int k) {
    int tamanhoB = 0;

    while (strB[tamanhoB] != '\0') {
        tamanhoB++;
    } if (k > tamanhoB) {
        k = tamanhoB;
    }

    for (int i = 0; i < k; i++) {
        strA[i] = strB[k - 1 - i];
    }

    strA[k] = '\0';
}

int main() {
    char strA[30], strB[30];
    int k;

    cin.getline(strB, 30);
    cin >> k;

    copiaInvertido(strA, strB, k);

    cout << strA << endl;

    return 0;
}