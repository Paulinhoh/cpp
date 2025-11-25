#include <iostream>
#include <stdlib.h>

// jogo da forca

using namespace std;

int main()
{
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "fale para seu amigo fechar os olhos e digitar a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0')
    {
        i++;
        tam++;
    }

    for (size_t i = 0; i < 30; i++)
    {
        secreta[i] = '_';
    }

    while ((chances > 0) && (acertos < tam))
    {
        cout << "chances restantes: " << chances << endl;

        cout << "palavra secreta: ";
        for (size_t i = 0; i < tam; i++)
        {
            cout << secreta[i];
        }

        cout << "\n\ndigite uma letra: ";
        cin >> letra[0];
        for (size_t i = 0; i < tam; i++)
        {
            if (palavra[i] == letra[0])
            {
                acerto = true;
                secreta[i] = letra[0];
                acertos++;
            }
        }
        if (!acerto)
        {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if (acertos == tam)
    {
        cout << "você venceu!!" << endl;
    }
    else
    {
        cout << "Voce perdeu." << endl;
    }

    system("pause");
    return 0;
}