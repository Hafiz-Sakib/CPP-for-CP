/* class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s;
        for (auto u : nums)
        {
            s.insert(u);
        }
        if (s.size() == nums.size())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}; */

// https://leetcode.com/problems/contains-duplicate/