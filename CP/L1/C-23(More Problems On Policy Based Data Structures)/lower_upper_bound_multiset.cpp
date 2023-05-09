// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pii;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
typedef tree<ll, null_type, greater<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    greater_set;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    multi_set;
typedef tree<ll, null_type, greater_equal<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    greater_multi_set;

#define space ' '
#define endl "\n"

#define b() begin()
#define e() end()
#define all(data) data.begin(), data.end()
#define rall(data) data.rbegin(), data.rend()

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define YES cout << "Yes\n"
#define NO cout << "No\n"

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{

    // vi v = {1, 2, 2, 3, 3, 3, 4};
    // cout << lower_bound(all(v), 3) - v.b() <<endl;

    // ভেক্টরের ক্ষেত্রে লোয়ার বাউন্ড রিটার্ন করে ঐ এলিমেন্ট টা সর্বনিম্ন কোন ইন্ডেক্সে ইনসার্ট করলে এরেটা সর্টেড থাকবে।

    multi_set s;

    s.insert(2);
    s.insert(6);
    s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(1);

    cout << *s.lower_bound(4) << endl;

    // মাল্টিসেটের ক্ষেত্রে কিছুটা ঝামেলা পরিলক্ষিত করলাম। এখানে লোয়ার বাউণ্ড ফাংশনে আপার বাউন্ড রিটার্ন করতেছে আর আপার বাউন্ডে লোয়ার বাউন্ড রিটার্ন করতেছে তাই আমরা ইউস করার সময় উলটো করে ইউস করবো।

    // Same goes for Upper Bound too !

    cout << *s.upper_bound(4) << endl;
}

int main()
{
    Boost;
    Boom();
    return 0;
}