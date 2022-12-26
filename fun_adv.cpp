#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int sumNaturalNumber(int nm)
{
    int xnm;
    xnm = nm * (nm + 1) / 2;
    return xnm;
}
bool checkPyth(int x, int y, int z)
{
    bool flag = false;
    int max, nm1, nm2;
    if (x > y)
    {
        if (x > z)
        {
            max = x;
            nm1 = y;
            nm2 = z;
        }
        else
        {
            max = z;
            nm1 = x;
            nm2 = y;
        }
    }
    else
    {
        if (y > z)
        {
            max = y;
            nm1 = x;
            nm2 = z;
        }
        else
        {
            max = z;
            nm1 = x;
            nm2 = y;
        }
    }
    ((max * max) == (nm1 * nm1 + nm2 * nm2)) ? flag = true : flag = false;
    return flag;
}

//----Binary to Decimal
int binaryToDecimal(int nm)
{
    cout << nm << endl;
    int ans = 0;
    int x = 1;
    int lastDigit;
    while (nm > 0)
    {
        lastDigit = nm % 10;
        ans += x * lastDigit;
        x *= 2;
        nm /= 10;
    }
    return ans;
}

//----octalToDecimal
int octalToDecimal(int nm)
{
    int ans = 0;
    int x = 1;
    int lastDigit = 0;
    while (nm > 0)
    {
        lastDigit = nm % 10;
        ans += x * lastDigit;
        x *= 8;
        nm /= 10;
    }
    return ans;
}

//----hexaDecimalToDecimal
int hexaDecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;
    int sz = 0;
    sz = n.size();
    int i = 0;
    for (i = sz - 1; i >= 0; i--)
    {

        if (n[i] >= '0' && n[i] <= '9')
        {
            ans += x * (n[i] - '0');
        }
        if (n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

//----- decimalToBinary
int decimalToBinary(int n = 0)
{
    int ans = 0;
    int lastDigit = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;
    while (x > 0)
    {
        lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

//----- decimalToOctal
int decimalToOctal(int n = 0)
{
    int ans = 0;
    int lastDigit = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;
    while (x > 0)
    {
        lastDigit = n / x;
        n -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

//----- decimalToHexaDecimal
string decimalToHexaDecimal(int n = 0)
{
    string ans = "";
    int lastDigit = 0;
    int x = 1;

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        lastDigit = n / x;
        n -= lastDigit * x;
        x /= 16;
        if (lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int x, y, z;
    cin >> x >> y >> z;

    //----
    // cout << "Sum of Natural number--\n";
    // cout << sumNaturalNumber(x) << endl;

    //----Pythagorean triplet
    // checkPyth(x, y, z) ? cout << "Pythagorean triplet" : cout << "Not a Pythagorean triplet";

    //---BinaryToDecimal
    // cout << binaryToDecimal(x) << endl;

    //---octalToDecimal
    // cout << octalToDecimal(x) << endl;

    //---hexaDecimalToDecimal
    // string n;
    // cin >> n;
    // cout << hexaDecimalToDecimal(n) << endl;

    //----- decimalToBinary
    // cout << decimalToBinary(x) << endl;

    //----- decimalToOctal
    // cout << decimalToOctal(x) << endl;

    //-----decimalToHexaDecimal
    cout << decimalToHexaDecimal(x) << endl;
}