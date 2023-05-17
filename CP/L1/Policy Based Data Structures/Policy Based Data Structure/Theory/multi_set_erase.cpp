// erase in multi set PBDS

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    multi_set;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    multi_set s;

    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    for (auto u : s)
    {
        cout << u << ' ';
    }

    cout << endl;

    // মাল্টিসেট থেকে সরাসরি ইরেজ করা যায় না,সে পারেনা। তাই ,আমাদেরকে লোয়ার ও আপার বাউন্ড ইউস করে যাকে ইরেজ করতে চাচ্ছি তার পয়েন্টার টা বের করে নিতে হবে সবার আগে। (বিঃদ্রঃ এক্ষেত্রে অবশ্যই খেয়াল রাখতে হবে যে মাল্টিসেটে লোয়ার বাউন্ড ফাংশন আপার বাউন্ড ফাংশনের কাজ করে দেয় এবং আপার বাউন্ড ফাংশনের কাজ লোয়ার বাউন্ড ফাংশন করে দেয়)।পয়েন্টার টা বের করে নেয়ার পরে সেই পয়েন্টার টা ই মূলত ইরেজ করে দিবো।

    auto it = s.upper_bound(4);
    // আমি লোয়ার বাউন্ড এর 4 কে ইরেজ করতে চাচ্ছি তাই আপার বাউন্ড ফাংশন ইউস করসি
    // যেহেতু উলটো কাজ করে

    if (it != s.end() && *it == 4)
    {
        // চেক করে নিলাম যে ,যে পয়েন্টার টা পেলাম সেটা সর্বশেষ পয়েন্টার নয়তো ?(অর্থাৎ নতুন করে ইন্সার্ট করলে যে লোয়ার বাউন্ড টা আসবে সেটা আমাকে দিচ্ছে না তো?)  এবং যে পয়েন্টার টা পেলাম সেখানে আসলেই 4 আছে তো ?
        s.erase(it);
    }

    for (auto u : s)
    {
        cout << u << ' ';
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}