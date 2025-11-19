// Incrementando e decrementando variaveis, operadores pós e pré-fixados

#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    n1 = 0;
    n2 = 10;
    cout << "n1 antes do incremento: " << n1 << endl;
    cout << "n2 antes do decremento: " << n2 << endl;

    // n1=n1+1;
    // n2=n2-1;
    // (+=, -=, *=, /=, %=)
    n1 += 2; // incremento composto
    n2 -= 2; // decremento composto
    cout << "n1 depois do incremento composto: " << n1 << endl;
    cout << "n2 depois do decremento composto: " << n2 << endl;

    ++n1; // operador pré-fixado de incremento
    --n2; // operador pré-fixado de decremento
    cout << "n1 depois do incremento pré-fixado: " << n1 << endl;
    cout << "n2 depois do decremento pré-fixado: " << n2 << endl;

    n1++; // operador pós-fixado de incremento
    n2--; // operador pós-fixado de decremento
    cout << "n1 depois do incremento: " << n1 << endl;
    cout << "n2 depois do decremento: " << n2 << endl;

    return 0;
}
