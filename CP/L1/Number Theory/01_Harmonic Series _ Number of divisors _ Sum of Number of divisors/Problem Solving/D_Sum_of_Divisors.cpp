// https://atcoder.jp/contests/abc172/tasks/abc172_d

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

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

const int mx = 1e8 + 123;
int cnt[mx];

void Boom()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            cnt[j]++;
        }
    }

    ll sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += (1LL * cnt[i] * i);
    }

    cout << sum << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
