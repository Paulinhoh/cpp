// Declarando variaveis multiplas e constantes #define

#include <iostream>

using namespace std;

#define MAX_TENTATIVAS 5 // Definindo uma constante com #define
#define canal cout << "Canal aberto!" << endl;

int main()
{
    int vidas, tiros = 8, life; // Declarando multiplas variaveis na mesma linha
    const float pi = 3.14f;     // Declarando uma constante

    cout << "Valor de pi: " << pi << endl;
    canal;
    
    return 0;
}
