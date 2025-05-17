/*Escreva uma função chamada parImpar que recebe como parâmetro um valor inteiro. A função deve imprimir se o número é par ou ímpar. Não é necessário criar a função principal.*/

#include <iostream>
using namespace std;

void parImpar (int n){
    if (n%2 == 0)
        cout << "Par";
    else 
        cout << "Impar";
}