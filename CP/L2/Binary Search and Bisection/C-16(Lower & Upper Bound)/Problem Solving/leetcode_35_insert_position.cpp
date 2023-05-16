// https://leetcode.com/problems/search-insert-position/description

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
        int searchInsert(vector<int> &nums, int target)
        {
            int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

            if (lb == nums.size())
            {
                return nums.size();
            }
            else
            {
                return lb;
            }
        }
    };
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        Boom();
    }

    return 0;
}
