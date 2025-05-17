/*Escreva uma função que receba como parâmetro uma string e imprima o primeiro e o último caractere da string.
Escreva uma função principal (main) que leia uma string (de até 20 caracteres) e chame a função anterior.*/

#include <iostream>
#include <string>
using namespace std;

void imprimePrimeiroeUltimo(const string &str) {
    cout << "Primeiro caractere: " << str[0] << endl;
    cout << "Ultimo caractere: " << str.back() << endl;
}


int main() {
    string entrada;
    getline(cin, entrada);

    imprimePrimeiroeUltimo(entrada);

    return 0;
}
