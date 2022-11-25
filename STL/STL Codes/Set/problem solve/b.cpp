#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
int main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << 7 << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}