#include <iostream>

using namespace std;

int main()
{
    // operadores lógicos: && || !
    int num = 8;

    // &&
    if (num > 4 && num < 7)
    {
        cout << "valor aceito &&" << endl;
    }
    else
    {
        cout << "nao aceito &&" << endl;
    }

    // ||
    if (num > 4 || num < 7)
    {
        cout << "valor aceito ||" << endl;
    }
    else
    {
        cout << "nao aceito" << endl;
    }

    // !
    if (num > 4 && !(num < 7))
    {
        cout << "valor aceito && e !" << endl;
    }
    else
    {
        cout << "nao aceito && e !" << endl;
    }

    return 0;
}