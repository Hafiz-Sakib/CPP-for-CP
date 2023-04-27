#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{

    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int l = 0, r = v.size() - 1, target = 3, ans = 1e5;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] >= target)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
