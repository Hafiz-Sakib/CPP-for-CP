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

    for (int i = 0; i < n; i++)
    {
        int mid = last - first / 2;
        if (q == v[mid])
        {
            cout << "Found" << endl;
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
}

int main()
{
    Boost;
    Boom();
    return 0;
}
