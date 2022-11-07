#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;

    for (int i = 1; i <= 10; ++i)
    {
        cout << i << " ";
    }

    cout << endl;

    int a = 10;
    cout << a++ << endl;
    cout << ++a << endl;
    cout << --a << endl;

    return 0;
}