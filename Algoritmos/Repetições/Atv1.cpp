/*Escreva uma função chamada fatorial que retorna o fatorial de um número inteiro passado como parâmetro. Se for passado um número negativo, retorne -1.*/

#include <iostream>
using namespace std;

int fatorial (int num){
    if (num < 0){
        return -1;
    } else if ( num == 0 || num == 1){
        return 1;
    }else{
        return num*fatorial ( num -1 );
    }
}