#include <iostream>

using namespace std;

int main()
{
    // ternario: (expressao) ? valor1 : valor2
    int n1, n2, nota;
    string res;

    cout << "digite o valor da nota 1 (0 a 10): ";
    cin >> n1;
    cout << "digite o valor da nota 2 (0 a 10): ";
    cin >> n2;

    nota = (n1 + n2) / 2;
    cout << "Media: " << nota << endl;

    // (nota >= 5) ? res = "aprovado" : res = "reprovado"; (outra forma de fazer)
    res = (nota >= 5) ? "aprovado" : "reprovado";

    cout << "Situacao do aluno: " << res << endl;

    return 0;
}