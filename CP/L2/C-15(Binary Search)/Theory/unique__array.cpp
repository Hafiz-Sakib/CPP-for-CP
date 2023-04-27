
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    vector<int> v = {2, 3, 5, 5, 7, 7, 1};
    sort(v.begin(), v.end());
    int sz = unique(v.begin(), v.end()) - v.begin();
    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    Boost;

    Boom();

    return 0;
}
