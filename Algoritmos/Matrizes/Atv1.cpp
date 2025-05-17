/*Dada uma matriz A (MxN) tal que M=5 e N=4 de números inteiros positivos, gerar uma matriz B tal que: B[i,j] = 0, se A[i,j] é par e B[i,j] = 1, se A[i,j] é ímpar. Para isso, siga os seguintes passos:
Crie uma função que receba a matriz A preenchida e a matriz B,  a qual deve ser preenchida a partir de A de acordo com as condições descritas acima.
Crie uma função principal que crie as matrizes A e B, leia a matriz A, chame a função do item anterior passando as duas matrizes, e em seguida imprima a matriz B.*/

#include <iostream>
#define M 5
#define N 4
using namespace std;

void matrizA(int matA[5][4], int matB[5][4]){
    
    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 4; j++){
            if (matA[i][j] % 2 == 0){
                matB[i][j] = 0;
            }else matB[i][j] = 1; 
        }
        
    }
} 

int main(){

int matA[5][4], matB[5][4];


    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 4; j++){
            cin >> matA[i][j];
        }
    }
    
    matrizA(matA, matB);
    
    for(int i = 0; i < 5; i++){
        
        for(int j = 0; j < 4; j++){
            cout << matB[i][j] << ' ';
        }
        cout << endl;
    }
    
    return 0;
}