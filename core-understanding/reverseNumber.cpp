#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// This program check Prime Number/ Print Reverse of a number / check Armstrong number
int powerNum(int num, int pw)
{
    int xnum = num;
    for (size_t i = 1; i <= pw - 1; i++)
    {
        num = num * xnum;
    }
    return num;
}

int main()
{
#ifndef ONLINE_GUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    bool flag = true;
    int reverse = 0;
    int holdNumber = n;
    int arms = 0;
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    flag ? cout << "Number is Prime\n" : cout << "Number is not Prime\n";
    while (n > 0)
    {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        arms += powerNum(lastdigit, 3);
        n = n / 10;
    }
    cout << "Reverse Number of : " << holdNumber << " is : " << reverse << " \n";
    if (arms == holdNumber)
    {
        cout << arms << " : Number is an Armstrong number\n";
    }
}
