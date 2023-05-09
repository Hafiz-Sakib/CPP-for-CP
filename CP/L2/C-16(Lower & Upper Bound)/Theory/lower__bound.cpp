// Find Lower Bound of a array

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    // ভেক্টরের ক্ষেত্রে লোয়ার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বনিম্ন কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।

    // অপর কথায়,লোয়ার বাউন্ড - প্রথম অকারেন্স এর ইন্ডেক্স টা।

    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int l = 0, r = v.size() - 1, target = 3, ans = 1e5;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (v[mid] >= target)
        {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
