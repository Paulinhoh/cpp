#include <iostream>
// switch-case

using namespace std;

int main()
{
    int valor;
    cout << "selcione uma cor: " << endl;
    cout << "[1]-verde, [2]-azul, [3]-vermelho -> ";
    cin >> valor;

    switch (valor)
    {
    case 1:
        cout << "cor selecionada: verde" << endl;
        break;
    case 2:
        cout << "cor selecionada: azul" << endl;
        break;
    case 3:
        cout << "cor selecionada: vermelho" << endl;
        break;
    default:
        cout << "valor selecionado invalido" << endl;
        break;
    }

    return 0;
}