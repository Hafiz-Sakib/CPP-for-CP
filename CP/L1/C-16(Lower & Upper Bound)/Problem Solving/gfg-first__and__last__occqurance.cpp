// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/0
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int lowerbound(vector<int> v, int q)
{
    int l = 0, r = v.size() - 1, ans = 1e5;
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
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
