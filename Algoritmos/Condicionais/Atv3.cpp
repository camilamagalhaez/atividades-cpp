/*Escreva uma função chamada realizaOperacao que recebe como parâmetro 2 valores reais e um caractere representando uma operação aritmética (+, -, * ou /). A função deve imprimir o resultado da operação sobre os números. No caso da operação de divisão, caso não seja possível realizar, imprima uma mensagem informando ao usuário. Não é necessário criar a função principal.*/

#include <iostream>
#include <iomanip>
using namespace std;

void realizaOperacao (float n1, float n2, char caracter){
    cout << fixed<<setprecision(1);
    if (caracter == '+'){
        cout << n1 << " + " << n2 << " = " << n1 + n2;
    }
    if (caracter == '-'){
        cout <<  n1 << " - " << n2 << " = " << n1 - n2;
    }
    if (caracter == '*'){
        cout << n1 << " * " << n2 << " = " << n1 * n2;
    }
    if (caracter == '/'){
        
        if (n2 != 0){
            cout << n1 << " / " << n2 << " = " << n1 / n2;
        }
        else{
            cout << "Erro! Divisao por zero!";
        } 
    }
}
