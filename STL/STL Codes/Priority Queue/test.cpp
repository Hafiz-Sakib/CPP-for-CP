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
int main()
{
    Boost;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        cout << n - 1 << endl;
        if (n > 1)
        {
            cout << 1 << " " << n << endl;
            int x;
            if ((vec[0] + vec[n - 1]) % 2 == 0)
                vec[0] = vec[n - 1], x = vec[n - 1];
            else
                vec[n - 1] = vec[0], x = vec[0];
            for (int i = 2; i < n - 1; i++)
            {
                if ((x + vec[i]) % 2 == 0)
                    cout << i + 1 << " " << n << endl;
                else
                    cout << 1 << " " << i + 1 << endl;
            }
        }
    }
    return 0;
}