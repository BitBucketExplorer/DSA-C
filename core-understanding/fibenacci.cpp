#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
//--Fibenacci series
void fib(int nm)
{
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for (size_t i = 1; i <= nm; i++)
    {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
//--- Factorial number
int fab(int n)
{
    int xnum = 1;
    for (size_t i = 2; i <= n; i++)
    {
        xnum *= i;
    }
    return xnum;
}

//--- Calculate nCr
double CalnCr(int a, int b)
{
    double xnCr;
    xnCr = fab(a) / (fab(a - b) * fab(b));
    return xnCr;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    cout << "Fibenacci series-\n";
    // fib(n);
    cout << "Factorial-\n";
    cout << fab(n) << endl;
    cout << fab(m) << endl;
    cout << "Calculate nCr\n";
    cout << CalnCr(n, m);
    return 0;
}