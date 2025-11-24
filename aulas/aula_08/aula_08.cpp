#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n1, n2, res;
    char opc;

inicio: // label
    system("cls");

    cout << "digite o valor da nota 1 (0 a 10): ";
    cin >> n1;
    cout << "digite o valor da nota 2 (0 a 10): ";
    cin >> n2;

    res = (n1 + n2) / 2;

    cout << "Media: ";
    cout << res << endl;

    if (res > 5)
    {
        cout << "Aluno aprovado" << endl;
    }
    else if (res >= 4 && res <= 5)
    {
        cout << "Aluno de recuperacao" << endl;
    }
    else
    {
        cout << "Aluno reprovado" << endl;
    }

    cout << "Digitor outras notas [s/n]: ";
    cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        goto inicio;
    }

    return 0;
}