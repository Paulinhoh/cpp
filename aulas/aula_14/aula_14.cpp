#include <iostream>
#include <vector>

using namespace std;

int main()
{
    for (size_t i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    cout << endl;

    vector<int> v = {1, 5, 6, 7, 8, 9, 22, 4};

    for (auto &&i : v)
    {
        cout << i << endl;
    }

    return 0;
}