#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void Boom()
{
    // ভেক্টরের ক্ষেত্রে আপার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বোচ্চ কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।

    // অপর কথায়, আপার বাউন্ড - সর্বশেষ অকারেন্স এর পরের ইন্ডেক্স টা

    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int x = upper_bound(v.begin(), v.end(), 3) - v.begin();

    cout << x << endl;

    // Upper Bound STL Function returns a memory adress that's why I've minused v.begin() to get the index Value!.
}

int main()
{
    Boost;
    Boom();
    return 0;
}
