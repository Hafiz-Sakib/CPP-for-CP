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
    double a = 10.10;
    double b = 100.1546;
    cout << a * b << endl;                             // 1011.56
    cout << fixed << setprecision(1) << a * b << endl; // 1011.56

    return 0;
}