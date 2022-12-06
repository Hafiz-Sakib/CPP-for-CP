/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    // Let's Move
    ll a, b, c;
    cin >> a >> b >> c;
    ll s = abs(a - b) * 2;
    if (c > s || a > s || b > s || c > s)
    {
        cout << -1 << "\n";
    }
    else
    {
        if (c > s / 2)
        {
            cout << c - s / 2 << "\n";
        }
        else
        {
            cout << c + s / 2 << "\n";
        }
    }
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<t<<" : ";
        Boom();
    }

    return 0;
}
