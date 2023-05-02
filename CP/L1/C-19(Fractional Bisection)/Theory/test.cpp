#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int lowerbound(vector<int> v, int q)
{
    int l = 0, r = v.size() - 1, ans = v.size() + 10;
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
        return ans;
    }
}
int upperbound(vector<int> v, int q)
{
    int l = 0, r = v.size() - 1, ans = v.size() + 10;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] <= q)
        {
            l = mid + 1;
        }
        else
        {
            ans = min(ans, mid);
            r = mid - 1;
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
    Boom();
    return 0;
}
