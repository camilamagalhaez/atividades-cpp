/*(A3Q3E3) Escreva uma função que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora, calcule e retorne o salário desse funcionário. Esta função também deve imprimir o número do funcionário antes de retornar o salário. A seguir, faça uma função principal que chame a função anterior e imprima o salário do funcionário, com duas casas decimais. Por ser uma empresa multinacional o pagamento é realizado em dólar.
Entrada: A entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.
Saída: Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.*/

#include <iostream>
#include <iomanip>
using namespace std;

    void calcularSalario (int numero, int horastrabalhadas, float valorporHora){
        float salario = horastrabalhadas * valorporHora;
        
        cout << "NUMBER = " << numero << endl;
        cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;
    }
        
int main(){
    int numero, horasTrabalhadas;
    float valorPorHora;
    
    cin >> numero >> horasTrabalhadas >> valorPorHora;
    
    calcularSalario(numero, horasTrabalhadas, valorPorHora);
    
    return 0;
}
