#include "bits/stdc++.h"

using namespace std;

typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);

    vector<int> s = {6, 6, 8, 1200, 1400, 1600, 1900, 2100, 2300, 2400, 2600, 3000};

    int n;
    cin >> n;

    auto i = upper_bound(s.begin(), s.end(), n);
    auto j = lower_bound(s.begin(), s.end(), n);

    if (i == s.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Upper Bound of " << n << " is : " << *i << endl;
        cout << "Lower Bound of " << n << " is : " << *j << endl;
    }

    return 0;
}
