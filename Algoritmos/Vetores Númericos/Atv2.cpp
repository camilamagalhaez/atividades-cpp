/*Faça um programa que crie três vetores de cinco posições inteiras, preencha dois deles com valores lidos do teclado e, ao final, preencha o terceiro vetor armazenando, em cada índice, a soma dos elementos de mesmo índice dos outros vetores. Ao final, imprima o terceiro vetor.*/

#include <iostream>
using namespace std;

int main(){
    
    const int tamanho = 5;
    int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
    
    for (int i = 0; i < tamanho; i++){
        cin >> vetor1[i];
    }
    
    for (int i = 0; i < tamanho; i++){
        cin >> vetor2[i];
    }
    
    for (int i = 0; i < tamanho; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    
    for (int i = 0; i < tamanho; i++) {
        cout << vetor3[i] << " ";
    }
    cout << endl;
    
    return 0;
}