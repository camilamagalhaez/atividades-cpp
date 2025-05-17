/*Faça uma função que receba uma string do usuário e um caractere qualquer. A função deverá remover todas as ocorrências do caractere na string e retornar o número de remoções. 
Faça um programa principal que leia uma string (máx. 100 caracteres) e um caractere, chame a função anterior e imprima o número de remoções e string resultante das remoções.*/

#include <iostream>
using namespace std;

int removeCaractere(char str[], char caractere) {
    int remocoes = 0;
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != caractere) {
            str[j] = str[i];
            j++;
        } else {
            remocoes++; // Conta a remoção
        }
    }

    str[j] = '\0';
    return remocoes;
}

int main() {
    char str[100];
    char caractere;

    cin.getline(str, 100);
    cin >> caractere;

    int remocoes = removeCaractere(str, caractere);

    cout << "Numero de remocoes: " << remocoes << endl;
    cout << "String sem o caractere '" << caractere << "': " << str << endl;

    return 0;
}
