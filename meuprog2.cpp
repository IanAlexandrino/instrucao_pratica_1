#include <iostream>
#include <iomanip>

using namespace std;
using std::fixed;
using std::setprecision;

int main(){

    // int a;
    // int b;

    // cout << "Informe dois números inteiros" << endl;
    // cout << "Primeiro número: ";
    // cin >> a;
    // cout << "Segundo número: ";
    // cin >> b;
    
    // cout << "Soma: " << a + b << endl;
    // cout << "Subtração: " << a - b << endl;
    // cout << "Multiplicação: " << a * b << endl;
    // cout << "Divisão: " << a / b << endl;
    // cout << "Resto: " << a % b << endl;

    // PRIMEIRA VERSÃO PEDIDA PELA ATIVIDADE

    float a;
    float b;
    

    cout << "Informe dois números inteiros" << endl;
    cout << "Primeiro número: ";
    cin >> a;
    cout << "Segundo número: ";
    cin >> b;
    
    cout << "Soma: " << a + b << endl;
    cout << "Subtração: " << a - b << endl;
    cout << "Multiplicação: " << a * b << endl;
    cout << fixed << setprecision(1);
    cout << "Divisão: " << a / b << endl;    

    return 0;
}
