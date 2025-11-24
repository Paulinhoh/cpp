#include <iostream>
// do-while -> testa pelo menos 1 vez

using namespace std;

int main()
{
    int n = 10;
    do
    {
        cout << "dentro do do-while: " << n << endl;
        n++;
    } while (n < 10);

    cout << "valor do n agr: " << n << endl;

    return 0;
}