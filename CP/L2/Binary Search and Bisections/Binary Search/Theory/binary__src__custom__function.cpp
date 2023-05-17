// Binary Search Custom Function

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

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

int main()
{
    Boost;

    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int r = binarysrc(v, 3);
    cout << r << endl;

    return 0;
}
