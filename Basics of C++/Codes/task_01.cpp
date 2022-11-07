#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;

    while (true)
    {
        int x;
        cin >> x;
        if (x == 42)
        {
            break;
        }
        cout << x << endl;
    }
    return 0;
}