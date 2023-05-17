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
    ordered_set s;

    s.insert(2);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(8);
    s.insert(7);
    s.insert(3);

    // order_of_key(x) – ফাংশনটি x এলিমেন্টটা কোন ইন্ডেক্সে আছে সেটা বলে দেয়।

    // অথবা,x এর চাইতে কয়টি ছোট এলিমেন্ট আছে সেটা  বলে দেয়।

    // Works For Both Set and Multiset!

    // set_name.order_of_key(x)

    cout << s.order_of_key(3) << endl;

    // ৩ এর চাইতে কয়টা ছোট ভ্যালু আছে অথবা ৩ এর ইন্ডেক্স কত সেটা রিটার্ন করবে এই ফাংশন !
}

int main()
{
    Boost;
    Boom();
    return 0;
}