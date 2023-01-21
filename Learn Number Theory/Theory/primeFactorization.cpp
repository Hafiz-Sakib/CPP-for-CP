/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define debug(x) cerr << x << endl;
#define here fprintf(stderr, "====I am Here====\n");

void Boom()
{
    int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Sample Input :
    // 10
    // 2 5 7 -1 5 6 8 10 0 10
    for (int i = 0; i < n; i++)
    {
        if (1)
        {
            cout << i + 1 << ' ';
        }
    }
}

// 10
// 2 5 7 -1 5 6 8 10 0 10

int main()
{
    Boost;

    int t = 1;
    while (t--)
    {
        Boom();
    }

    return 0;
}
