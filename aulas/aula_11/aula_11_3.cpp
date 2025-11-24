#include <iostream>
// switch-case

using namespace std;

int main()
{
    int valor;
    cout << "selcione uma cor: " << endl;
    cout << "[1]-carro, [2]-moto, [3]-aviao, [4]-helicoptero -> ";
    cin >> valor;

    switch (valor)
    {
    case 1:
    case 2:
        cout << "transporte terrestre" << endl;
        switch (valor)
        {
        case 1:
            cout << "carro" << endl;
            break;
        case 2:
            cout << "moto" << endl;
            break;
        }
        break;
    case 3:
    case 4:
        cout << "transporte aereo" << endl;
        switch (valor)
        {
        case 3:
            cout << "aviao" << endl;
            break;
        case 4:
            cout << "helicoptero" << endl;
            break;
        }
        break;
    default:
        cout << "valor selecionado invalido" << endl;
        break;
    }

    return 0;
}