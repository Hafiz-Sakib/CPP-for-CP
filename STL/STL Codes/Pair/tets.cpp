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
    int a = -1;
    int b = -4;

    if (a > b)
    {
        cout << a << " Big\n";
    }
    else
    {
        cout << b << " Big\n";
    }

    return 0;
}