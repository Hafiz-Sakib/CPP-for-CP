// https://www.geeksforgeeks.org/square-root-of-an-integer/

#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const double eps = 1e-12;

double root(int n)
{
    double l = 0, r = n, mid;
    // while( (r - l) > eps )
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
    cout << root(10) << endl;
    return 0;
}
