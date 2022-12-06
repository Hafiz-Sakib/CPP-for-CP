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
}

int main()
{
    Boost;

    vector<int> v;
    for (int i = 1; i <= 1000; i++)
    {
        if (i % 3 == 0 || i % 10 == 3)
        {
            continue;
        }
        else
        {
            v.push_back(i);
        }
    }

    for (auto u : v)
    {
        cout << u << " " << endl;
    }

    return 0;
}
