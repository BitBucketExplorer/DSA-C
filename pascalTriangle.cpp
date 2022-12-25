#include <iostream>
#include <math.h>
using namespace std;

int fab(int n)
{
    int xnum = 1;
    for (size_t i = 2; i <= n; i++)
    {
        xnum *= i;
    }
    return xnum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            cout << fab(i) / (fab(i - j) * fab(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}