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

    int chk = binary_search(v.begin(), v.end(), x);

    if (!chk)
    {
        cout << -1 << ' ' << -1 << endl;
        return;
    }

    int lo = lower_bound(v.begin(), v.end(), x) - v.begin();
    int up = upper_bound(v.begin(), v.end(), x) - v.begin();

    cout << lo << ' ' << (up - 1);
}

int main()
{
    Boost;
    Boom();
    return 0;
}
