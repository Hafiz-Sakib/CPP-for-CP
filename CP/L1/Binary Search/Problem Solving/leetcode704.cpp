// https://leetcode.com/problems/binary-search/submissions/936742103/
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    class Solution
    {
    public:
        int search(vector<int> &nums, int target)
        {
            int l = 0, r = nums.size() - 1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (target == nums[mid])
                {
                    return mid;
                }
                else if (target < nums[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            return -1;
        }
    };

    return 0;
}
