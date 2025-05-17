/*Implemente agora o exercicio (1) utilizando uma função que possua o seguinte prototipo: float leCalculaMedia(int n);*/

#include <iostream>
#include <iomanip>
using namespace std;

float leCalculaMedia(int n){

    float reais;
    float soma = 0;

    for (int i = 0; i < n; i++) {
        cin >> reais;
        soma = soma + reais;
    }

    float media = soma / n;
    return media;
}

int main(){
    int n;
    cin >> n;

    cout << fixed << setprecision(2);
    cout << "A média é: " << leCalculaMedia(n) << endl;
    
    return 0;
}

