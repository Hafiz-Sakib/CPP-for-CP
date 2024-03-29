// https://www.geeksforgeeks.org/square-root-of-an-integer/

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const double eps = 1e-12;

double perfectsqure(int n)
{
    n--;
    double l = 0, r = n, mid;
    for (int i = 1; i <= 100; i++)
    {
        mid = (l + r) / 2.0;
        if (mid * mid > n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    return floor(l);
}

int main()
{
    Boost;
    int n;
    cin >> n;
    cout << perfectsqure(n) << endl;
    return 0;
}
