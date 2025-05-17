/*Escreva uma função chamada angulo que recebe como parâmetros dois ângulos em graus de um triângulo. A função deve imprimir o terceiro ângulo. Dica: a soma dos três ângulos de um triângulo é sempre 180 graus. Não é necessário criar a função principal.*/

#include <iostream>
using namespace std;

void angulo (int angulo1, int angulo2){
    int angulo3 = 180 - (angulo1 + angulo2);
    cout << "Angulo = " << angulo3 << " graus" << endl;
}