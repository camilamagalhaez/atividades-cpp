/*(A3Q1E3) Crie uma função que retorne a média de combustível gasto pelo usuário. Esta função receberá a quantidade de quilômetros rodados e a quantidade de combustível consumido em litros. Faça também um programa (main) que leia os valores, chame a função e imprima na tela a resposta. A resposta deverá ser impressa no formato 9.999 km/l, ou seja com 3 casas decimais seguido pela unidade km/l.*/

#include <iostream>
#include <iomanip>
using namespace std;

double mediaCombustivel (double qtdquilometros, double qtdcombustivel){ //definição da função
    return qtdquilometros / qtdcombustivel; //calcula media de km
}

int main(){
    double qtdquilometros, qtdcombustivel;
    
    cin >> qtdquilometros;
    cin >> qtdcombustivel;
    
    double media = mediaCombustivel (qtdquilometros, qtdcombustivel);

    cout << fixed << setprecision(3);
    cout << media << " km/l" << endl;

    return 0;
}