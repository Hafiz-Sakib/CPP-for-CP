// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/0

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int lowerbound(vector<int> v, int q)
{
    int l = 0, r = v.size() - 1, ans = v.size();
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] >= q)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

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
    int ff = lower_bound(v.begin(), v.end(), x) - v.begin();
    int ll = upper_bound(v.begin(), v.end(), x) - v.begin();
    cout << ff << ' ' << (ll - 1);
}

int main()
{
    Boost;
    Boom();
    return 0;
}
