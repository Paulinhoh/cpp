// Variaveis

#include <iostream>

using namespace std;

int main()
{
    // tipo nome_variavel;
    // tipo nome_variavel = valor_inicial;

    int vidas = 3;        // 10, 25, -30
    char letra;           // 'a', 'b', '1', '?'
    float peso;           // 65.5, 90.2, -15.3 (precisao menor)
    double decimal = 5.2; // 65.55555, 90.22222, -15.33333 (precisao maior)
    bool ligado = true;   // true (1), false (0)
    string nome;          // "Joao", "Maria", "1234"

    cout << "Digite um nome: ";
    cin >> nome; // entrada de dados

    cout << "Vidas: " << vidas << endl;
    cout << "Letra: " << letra << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Ligado: " << ligado << endl;
    cout << "Nome: " << nome << endl;

    return 0;
}

/*
    bloco de comentarios
*/
