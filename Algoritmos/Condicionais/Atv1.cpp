/*Escrever uma função que leia a matrícula e as três notas obtidas por um aluno durante o semestre. Calcular a sua média (aritmética), imprimir a matrícula e sua situação, sendo "Aprovado" (media >= 7), "Reprovado" (media <= 5) ou "Recuperacao" (5 < media < 7). O programa para chamar a função já está implementado a seguir, implemente apenas a função.*/

#include <iostream>
using namespace std;

void verificarmatricula (){
    float nota1, nota2, nota3;
    int matricula;
    cin >> matricula;
    cin >> nota1 >> nota2 >> nota3;
    cout << matricula << " ";
    
    float media = (nota1+nota2+nota3)/3;
    
    if (media >= 7) {
        cout << "Aprovado";
    }
    else if (media<=5){
        cout << "Reprovado";
    }
    else {
        cout << "Recuperacao";
    }
}

int main()
{
     verificarmatricula ();

    return 0;
}
