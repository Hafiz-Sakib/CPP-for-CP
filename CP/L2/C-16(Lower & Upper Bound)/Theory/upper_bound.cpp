// Find Upper Bound of a array

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{

    // ভেক্টরের ক্ষেত্রে আপার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বোচ্চ কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।

    // অপর কথায়, আপার বাউন্ড - সর্বশেষ অকারেন্স এর পরের ইন্ডেক্স টা

    vector<int> v = {1, 2, 2, 3, 3, 3, 4};
    int l = 0, r = v.size() - 1, target = 3, ans = 1e5;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] <= target)
        {
            l = mid + 1;
        }
        else
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}
