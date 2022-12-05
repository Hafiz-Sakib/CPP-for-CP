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
void Boom()
{
    // Let's Move
    int n;
    string s, t;
    cin >> n >> s >> t;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            s[i] = 'G';
        }
        if (t[i] == 'B')
        {
            t[i] = 'G';
        }
        if (s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
