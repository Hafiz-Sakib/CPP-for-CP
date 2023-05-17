// Lower Bound STL Function

#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void Boom()
{

    // ভেক্টরের ক্ষেত্রে লোয়ার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বনিম্ন কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।

    // অপর কথায়,লোয়ার বাউন্ড - প্রথম অকারেন্স এর ইন্ডেক্স টা।

    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};

    int x = lower_bound(v.begin(), v.end(), 3) - v.begin();
    auto y = *lower_bound(v.begin(), v.end(), 3);

    cout << x << " " << y << endl;

    // *** লোয়ার আর আপার বাউন্ডের বিল্ড-ইন ফাংশন নরমালি পয়েন্টার রিটার্ন করে থাকে।আমরা ইন্ডেক্স টা পাবার জন্যই মূলত  v.begin() টা বিয়োগ করে দি।

    // এখানে অটো তে যে পয়েন্টার/ইটেরেটর রিটার্ন করছে তার মিনিং হলো ৩ এর লোয়ার বাউন্ডে কোন ভ্যালু আছে?
}

int main()
{
    Boost;
    Boom();
    return 0;
}
