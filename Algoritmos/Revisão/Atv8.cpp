#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;

float calcularSoma(int n, float x){
    float soma = 0.0;
    for (int i = 0; i <= n; i++) {
        soma += pow(x, i);
    }
    return soma;
}

int main() {

    int n;    // Número inteiro (limite do somatório)
    float x; // Número real (base da potência)

    cin >> n;
    cin >> x;

    cout << fixed << setprecision(2) << endl;
    cout << "A soma S é: " << calcularSoma(n, x) << endl;

    return 0; 

}
