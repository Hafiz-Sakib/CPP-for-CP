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
    double a = 1.22546541;
    double b = 4.2241;
    double c = a + b;
    cout << fixed << setprecision(20) << c << endl; // setprecision er vitore thaka number er soman doshomik er por print korbe
    return 0;
}