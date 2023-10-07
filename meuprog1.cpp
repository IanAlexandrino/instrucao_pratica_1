#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome_usuario;

    cout << "Informe o seu nome" << endl;
    getline(cin, nome_usuario);
    cout << "Bom dia " << nome_usuario << " !!!" << endl;

    return 0;
}
