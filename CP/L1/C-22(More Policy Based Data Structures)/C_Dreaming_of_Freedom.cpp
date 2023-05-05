// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<string> vs;

#define space ' '
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");
#define setp(n) fixed << setprecision(n)

const double eps = 1e-12;
const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void primeFactors(int n, int m)
{
    if (n % 2 == 0)
    {
        if (m >= 2)
        {
            no;
        }
        else
        {
            yes;
        }
        return;
    }
    for (int i = 3; i * i <= n; i = i + 2)
    {
        if (n % i == 0)
        {
            (m >= i) ? no : yes;
            return;
        }
    }
    yes;
    return;
}
void Boom()
{
    int n, m;
    cin >> n >> m;

    if (m >= n && n != 1)
    {
        no;
        return;
    }

    primeFactors(n, m);

    return;
}
int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
