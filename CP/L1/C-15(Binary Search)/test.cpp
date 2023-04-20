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

    int q;
    cin >> q;

    int first = v[0];
    int last = v[n - 1];

    while (first <= last)
    {
        int mid = last - first / 2;
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

int main()
{
    Boost;

    Boom();

    return 0;
}
