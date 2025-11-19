// Variaveis locais e globais, operadores aritmeticos

#include <iostream>

using namespace std;

int n1, n2; // variaveis globais (podem ser usadas em qualquer parte do programa)

int main()
{
    int n3, n4; // variaveis locais (só podem ser usadas dentro da função main)
    int res, res1, res2;

    // Operadores aritmeticos: +, -, *, /, % (ordem de precedencia)
    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = n1 + n2 + n3 + n4;
    cout << "Soma: " << res << endl;

    res = (n1 + n2 + n3 + n4) - 10;
    cout << "Somando e subtraindo por 10: " << res << endl;

    res = n1 + n2 * n4;
    cout << "Resultado: " << res << endl;

    res = (n1 + n2) * n4;
    cout << "Resultado: " << res << endl;

    res1 = n1 / n2; // divisao inteira
    res2 = n1 % n2; // resto da divisao
    cout << "Divisao inteira: " << res1 << endl;
    cout << "Resto da divisao: " << res2 << endl;

    return 0;
}
