/*Faça uma função que, dados uma string str e um caractere ch, procure e retorne a posição da primeira ocorrência de ch na string str. Se ch não for encontrada em str, retornar o valor −1. int procuraCharNaString(string str, char ch); Dica: para saber o tamanho da string use str.size().*/

#include <iostream>
using namespace std;

int procuraCharNaString(string str, char ch){
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ch){
            return i;
        }
    }
    return -1;
}

int main(){
    string str;
    char ch;
    int position;

    cin >> str;
    cin >> ch;

    position = int procuraCharNaString(str, ch);

    cout << "A posição do caractere é: " << position << endl;

    return 0;
}
