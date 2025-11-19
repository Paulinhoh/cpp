// Estutura basica de um programa em C++

#include <iostream> // Biblioteca padrao de entrada e saida

using namespace std; // Usar o espaco de nomes padrao (namespace std)

int main() // Funcao principal do programa
{
    // cout -> printf em C++
    // endl -> quebra de linha
    // \n também quebra a linha, mas endl também limpa o buffer de saída
    cout << "Hello, World!" << endl; // Imprime "Hello, World!" na tela

    system("pause"); // Pausa a execucao do programa (funciona no Windows)
    return 0;        // Indica que o programa terminou com sucesso
}
