#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

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
int binarysrc(vector<int> v, int q)
{
    int first = 0;
    int last = v.size() - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (q == v[mid])
        {
            return mid;
        }
        else if (v[mid] < q)
        {
            first = mid + 1;
        }
        else if (v[mid] > q)
        {
            last = mid - 1;
        }
    }
    return -1;
}
void Boom()
{
    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int lb = lowerbound(v, 3);
    int ub = upperbound(v, 3);
    int x = lower_bound(v.begin(), v.end(), 3) - v.begin();
    int y = upper_bound(v.begin(), v.end(), 3) - v.begin();
    cout << lb << ' ' << ub << endl;
    cout << x << ' ' << y << endl;
    cout << binarysrc(v, 1) << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
