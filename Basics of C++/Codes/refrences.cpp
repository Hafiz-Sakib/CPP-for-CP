#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void increament(int &n, int m)
{
    n++;
    m++;
}

int main()
{
    Boost;
    int a = 3;
    int b = 5;
    cout << a << " " << b << endl;
    increament(a, b);
    cout << a << " " << b << endl;
    return 0;
}