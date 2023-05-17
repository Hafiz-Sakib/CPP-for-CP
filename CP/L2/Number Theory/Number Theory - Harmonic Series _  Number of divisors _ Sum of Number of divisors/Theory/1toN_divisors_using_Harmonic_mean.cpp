// 1 to N all numbers Divisors Using Harmonic Mean Theorem
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n;
    cin >> n;
    vector<vector<int>> divisors(n + 1);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            divisors[j].push_back(i);
        }
    }

    // Time Complexity :  O ( n * ln(n))  => From Harmonic Series

    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";

        for (auto u : divisors[i])
        {
            cout << u << ' ';
        }

        cout << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
