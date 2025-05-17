/*Escreva uma função para imprimir uma matriz de dez linhas e três colunas de números reais recebida como parâmetro. As impressões devem ser feitas com 2 casas decimais.
Escreva uma função que receba como entrada três vetores reais de tamanho dez e uma matriz de dimensão 10x3. Esta função deve colocar cada um dos vetores de entrada em uma coluna da matriz.
Escreva uma função principal (main) que leia do teclado três vetores reais de tamanho dez e chame as funções desenvolvidas nos itens anteriores.*/

#include <iostream>
#include <iomanip>
#define M 10
#define N 3
using namespace std;

void imprimeM(float mat[10][3], int vet1[], int vet2[], int vet3[]){
    
    for(int i = 0; i < 10; i++){
        mat[i][0] = vet1[i]; 
    }
    
    for(int i = 0; i < 10; i++){
        mat[i][1] = vet2[i];
    }
    
    
    for(int i = 0; i < 10; i++){
        mat[i][2] = vet3[i];
    }
}

int main()
{

    int vet1[10], vet2[10], vet3[10];
    float mat[10][3];

    for(int i = 0; i < 10; i++){
        cin >> vet1[i];
    }

    for(int i = 0; i < 10; i++){
        cin >> vet2[i]; 
    }
    
    for(int i = 0; i < 10; i++){
        cin >> vet3[i]; 
    }

    imprimeM(mat, vet1, vet2, vet3);


    cout << setprecision(2) << fixed;
    for(int i = 0; i < 10; i++){
     
        for(int j = 0; j < 3; j++){
             cout << mat[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}