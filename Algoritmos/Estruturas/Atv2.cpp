/*Faça uma estrutura que represente um número complexo, onde um número complexo c é escrito da forma c = a+bi. Portanto, é necessário armazenar os números reais a e b. 
Implemente uma função para fazer adição de números complexos, recebendo 2 números complexos e retornando o número complexo resultante. Dica:  Adição: c1 + c2 = (a1 + b1i) + (a2 + b2i) = (a1 + a2) + (b1 + b2)i
Implemente uma função para fazer subtração de números complexos, recebendo 2 números complexos e retornando o número complexo resultante. Dica : Subtração: c1 - c2 = (a1 + b1i) - (a2 + b2i) = (a1 - a2) + (b1 - b2)i
Implemente uma função para fazer multiplicação de números complexos, recebendo 2 números complexos e retornando o número complexo resultante. Dica: Multiplicação: c1 * c2 = (a1 + b1i) * (a2 + b2i) = (a1*a2 -b1*b2 ) + (a1*b2 + b1*a2)i*/

#include <iostream>
#include <iomanip>
using namespace std;

struct Complexo{
    float a;
    float b;
};

void Soma(Complexo c[]){
    float somareais = c[0].a + c[1].a;
    float somaimaginarios = c[0].b + c[1].b;
    
    cout << fixed << setprecision(2);
    if(somaimaginarios < 0 ){
        cout << "Soma: " << somareais << " " << somaimaginarios << "i" << endl;
    }else{
        cout << "Soma: " << somareais << " " << "+" << somaimaginarios << "i" << endl;
    }
    
    
}

void Subtracao (Complexo c[]){
    float subtracaoreais = c[0].a - c[1].a;
    float subtracaoimaginarios = c[0].b - c[1].b;
    
    cout << fixed << setprecision(2);
    if(subtracaoimaginarios < 0 ){
        cout << "Subtracao: " << subtracaoreais << " " << subtracaoimaginarios << "i" << endl;
    }else{
        cout << "Subtracao: " << subtracaoreais << " " <<  "+" << subtracaoimaginarios << "i" << endl;
    }
    
}

void Multiplicacao (Complexo c[]){
    float multiplicacaoreais = c[0].a * c[1].a - c[0].b * c[1].b;
    float multiplicacaoimaginarios = c[0].a * c[1].b + c[0].b * c[1].a;
    
    cout << fixed << setprecision(2);
    if(multiplicacaoimaginarios < 0 ){
        cout << "Multiplicacao: " << multiplicacaoreais << " " << multiplicacaoimaginarios << "i";
    }else{
        cout << "Multiplicacao: " << multiplicacaoreais << " " << "+" << multiplicacaoimaginarios << "i";
    }
    
}

int main(){

    Complexo c[2];
    for(int i = 0; i < 2; i++){
        cin >> c[i].a >> c[i].b;
    }
    
    Soma (c);
    Subtracao(c);
    Multiplicacao(c);
    
    return 0;
}