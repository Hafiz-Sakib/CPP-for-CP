#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    while (t--)
    {
        int first = 0;
        int last = n - 1;
        int q;
        cin >> q;
        while (first <= last)
        {
            int mid = (first + last) / 2;
            if (q == v[mid])
            {
                cout << "found" << endl;
                break;
            }
            else if (q > v[mid])
            {
                first = mid + 1;
            }
            else if (q < v[mid])
            {
                last = mid - 1;
            }
        }
        if (first > last)
        {
            cout << "not found" << endl;
        }
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
