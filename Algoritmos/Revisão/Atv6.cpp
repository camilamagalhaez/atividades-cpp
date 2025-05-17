/*Faça um programa que leia os valores lógicos de X, Y e Z e armazene o resultado das seguintes operações lógicas:
► (X && Y) || (X && !Z) ► (X || Y) && (!X && Z)*/

#include <iostream>
using namespace std;

int main() {
    bool X, Y, Z;
    bool resultado1, resultado2;
    
    cout << "Digite os valores das variáveis X, Y e Z (0 = Falso, 1 = Verdadeiro)" << endl;
    cin >> X >> Y >> Z;

    resultado1 = (X && Y) || (X && !Z);
    resultado2 = (X || Y) && (!X && Z);

    cout << "O resultado da primeira operação é: " << resultado1 << endl;
    cout << "O resultado da primeira operação é: " << resultado2 << endl;

    return 0;

}
