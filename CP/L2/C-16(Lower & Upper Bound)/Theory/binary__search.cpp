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

    int first = 0;
    int last = n - 1;

    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (q == v[mid])
        {
            cout << "Found" << endl;
            break;
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

    if (first > last)
    {
        cout << "Not Found" << endl;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}