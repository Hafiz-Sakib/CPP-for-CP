
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define gcd(a, b) __gcd(a, b)

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    if (a < b)
    {
        swap(a, b);
    }
    int r = a % b;
    return GCD(b, r);
}

void Boom()
{
    int a = 12, b = 6;
    cout << gcd(a, b) << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
