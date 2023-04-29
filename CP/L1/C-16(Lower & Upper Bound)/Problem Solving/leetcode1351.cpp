// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    class Solution
    {
    public:
        int countNegatives(vector<vector<int>> &grid)
        {
            int ans = 0;
            for (auto v : grid)
            {
                reverse(v.begin(), v.end());
                int c = lower_bound(v.begin(), v.end(), 0) - v.begin();
                ans += c;
            }
            return ans;
        }
    };
}

int main()
{
    Boost;
    Boom();
    return 0;
}
