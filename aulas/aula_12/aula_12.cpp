#include <iostream>
// while

using namespace std;

int main()
{
    int n = 0;
    while (n < 10)
    {
        cout << n << endl;
        if (n == 7)
        {
            break;
            // continue
        }
        n++;
    }
    cout << "rotina finalizada." << endl;

    return 0;
}