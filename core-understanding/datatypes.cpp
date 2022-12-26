#include <iostream>
using namespace std;

int main()
{
    int a;    // 4 byte
    float b;  // 4 byte
    double c; // 8 byte
    char d;   // 1 byte
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cout << "Hello How are : " << sizeof(a) << "\n";
    cout << "Hello How are : " << sizeof(b) << "\n";
    cout << "Hello How are : " << sizeof(c) << "\n";
    cout << "Hello How are : " << sizeof(d) << "\n";

    return 0;
}