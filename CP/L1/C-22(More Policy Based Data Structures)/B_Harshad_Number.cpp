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
#define yes cout << "Yes\n"
#define no cout << "No\n"

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

ll sum(string s)
{
    ll ans = 0;
    for (auto u : s)
    {
        ans += u - '0';
    }
    return ans;
}

void Boom()
{
    string s;
    cin >> s;
    ll num = stoi(s);
    !(num % sum(s)) ? yes : no;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
