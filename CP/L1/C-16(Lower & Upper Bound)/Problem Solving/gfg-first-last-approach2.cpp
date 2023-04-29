// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/0

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void Boom()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int lo = lower_bound(v.begin(), v.end(), x) - v.begin();
    int up = upper_bound(v.begin(), v.end(), x) - v.begin();

    if (lo == v.size())
    {
        cout << -1 << ' ' << -1 << endl;
        // first of all check this condition.because jodi shudu erporer index ta check kori tahole size er cheye boro index check korte giye out of bound hoye TLE dibe!
    }
    else if (v[lo] != x)
    {
        cout << -1 << ' ' << -1 << endl;
    }
    cout << lo << ' ' << (up - 1);
}

int main()
{
    Boost;
    Boom();
    return 0;
}
