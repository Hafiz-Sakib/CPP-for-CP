
// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

using namespace std;

bool covers_all_points(const vector<pair<int, int>> &points, int s)
{
    for (const auto &p : points)
    {
        if (abs(p.first) > s || abs(p.second) > s)
        {
            return false;
        }
    }
    return true;
}

int minimum_square_area(const vector<pair<int, int>> &points)
{
    int lo = 0;
    int hi = 0;
    for (const auto &p : points)
    {
        hi = max(hi, max(abs(p.first), abs(p.second)));
    }
    while (lo < hi)
    {
        int mid = (lo + hi) / 2;
        if (covers_all_points(points, mid))
        {
            hi = mid;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return hi * hi;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; i++)
        {
            cin >> points[i].first >> points[i].second;
        }
        cout << 4 * minimum_square_area(points) << endl;
    }
    return 0;
}
