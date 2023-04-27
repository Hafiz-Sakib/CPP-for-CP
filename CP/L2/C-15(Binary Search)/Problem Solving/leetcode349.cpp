// https://leetcode.com/problems/intersection-of-two-arrays-ii/

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
        vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
        {
            sort(nums2.begin(), nums2.end());
            vector<int> ret;
            for (auto u : nums1)
            {
                if (binary_search(nums2.begin(), nums2.end(), u))
                {
                    ret.push_back(u);
                }
            }

            sort(ret.begin(), ret.end());

            int size = unique(ret.begin(), ret.end()) - ret.begin();

            while (ret.size() > size)
            {
                ret.pop_back();
            }

            return ret;
        }
    };
}

int main()
{
    Boost;
    Boom();
    return 0;
}
