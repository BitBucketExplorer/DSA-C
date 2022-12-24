#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    for (size_t i = 0; i < b; i++)
    {
        for (size_t j = i; j < a; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}