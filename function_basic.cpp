#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    for (size_t j = 2; j <= sqrt(num); j++)
        if (num % j == 0)
            return false;

    return true;
}

int main()
{
#ifndef ONLINE_GUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    for (size_t i = a; i <= b; i++)
        if (isPrime(i))
            cout << i << endl;
}