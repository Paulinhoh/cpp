#include <iostream>
// switch-case

using namespace std;

int main()
{
    int valor;
    cout << "selcione uma cor: " << endl;
    cout << "[1,2,3]-verde, [4,5,6]-azul, [7,8,9]-vermelho -> ";
    cin >> valor;

    switch (valor)
    {
    case 1:
    case 2:
    case 3:
        cout << "cor selecionada: verde" << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "cor selecionada: azul" << endl;
        break;
    case 7:
    case 8:
    case 9:
        cout << "cor selecionada: vermelho" << endl;
        break;
    default:
        cout << "valor selecionado invalido" << endl;
        break;
    }

    return 0;
}