#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // vetor padrão c++
    int vetor[4] = {7, 1, 22, -2};

    // vetor usando std (vector)
    vector<int> vetor2(3);

    for (auto &&i : vetor)
    {
        cout << i << endl;
    }
    cout << endl;

    for (auto &&i : vetor2)
    {
        cout << i << endl;
    }
    cout << endl;

    // o sizeof retorna o tamanho do tipo no caso int cada bite é 4
    cout << "tamanho do vetor: " << sizeof(vetor) / 4 << endl;
    cout << "tamanho do vetor2: " << vetor2.size() << endl;

    return 0;
}