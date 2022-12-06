/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
    long long int n, k;
    cin >> n >> k;
    long long int p;
    if (n % 2 == 0)
    {
        p = n / 2;
    }
    else
    {
        p = (n / 2) + 1;
    }
    if (k <= p)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << (k - p) * 2;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
