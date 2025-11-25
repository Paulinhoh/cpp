#include <iostream>

using namespace std;

void texto();
void soma(int a, int b);
int soma2(int a, int b);
void tr(string tra[4]);

int main()
{
    texto();
    soma(8, 7);
    int resultado = soma2(175, 25);
    cout << resultado << endl;

    string transp[4] = {"carro", "moto", "barco", "aviao"};
    tr(transp);

    return 0;
}

void texto()
{
    cout << "hello, world" << endl;
}

void soma(int a, int b)
{
    cout << a + b << endl;
}

int soma2(int a, int b)
{
    return a + b;
}

void tr(string tra[4])
{
    for (size_t i = 0; i < 4; i++)
    {
        cout << tra[i] << endl;
    }
}
