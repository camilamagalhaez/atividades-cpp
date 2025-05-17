/*Faça uma função que receba como parâmetros um vetor de números reais e o seu tamanho n, e que leia do teclado n números reais, guarde-os no vetor e calcule a sua média. A função deve retornar a média ao final.
float leVetorCalculaMedia(int n, float vet[]);*/

#include <iostream>
#include <iomanip>
using namespace std;

float leVetorCalculaMedia(int n, float vet[]){
    
    float soma = 0;
    float media;

    for(int i = 0; i < n; i++){
        cin >> vet[i];
        soma += vet[i];
    }

    media = soma/n;
    return media;

}

int main(){
    int n;
    cin >> n;
    float vet[n];

    cout << fixed << setprecision(2);
    cout << "A média é: " << leVetorCalculaMedia(n, vet) << endl;
}