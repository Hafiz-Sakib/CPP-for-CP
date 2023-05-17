// lower and upper bound of set

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{

    // vi v = {1, 2, 2, 3, 3, 3, 4};
    // cout << lower_bound(all(v), 3) - v.b() <<endl;

    // ভেক্টরের ক্ষেত্রে লোয়ার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বনিম্ন কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।
    // অপর কথায়,লোয়ার বাউন্ড - প্রথম অকারেন্স এর ইন্ডেক্স টা।

    // ভেক্টরের ক্ষেত্রে আপার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বোচ্চ কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।
    // অপর কথায়, আপার বাউন্ড - সর্বশেষ অকারেন্স এর পরের ইন্ডেক্স টা

    // *** লোয়ার আর আপার বাউন্ডের বিল্ড-ইন ফাংশন নরমালি পয়েন্টার রিটার্ন করে থাকে।আমরা ইন্ডেক্স টা পাবার জন্যই মূলত  v.begin() টা বিয়োগ করে দি।

    ordered_set s;

    s.insert(2);
    s.insert(6);
    s.insert(8);
    s.insert(7);
    s.insert(3);
    s.insert(1);

    cout << *s.lower_bound(4) << endl;

    // সেটের ক্ষেত্রে লোয়ার বাউন্ড রিটার্ন করবে (যার ভ্যালু প্যারামিটার হিসেবে পাস করলাম তার লোয়ার বাউণ্ডে কে আছে তা)

    // Same goes for Upper Bound too !

    cout << *s.upper_bound(4) << endl;

    // সেটের ক্ষেত্রে আপার বাউন্ড রিটার্ন করবে (যার ভ্যালু প্যারামিটার হিসেবে পাস করলাম তার আপার বাউণ্ডে কে আছে তা)
}

int main()
{
    Boost;
    Boom();
    return 0;
}