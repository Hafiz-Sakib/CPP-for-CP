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
    ordered_set s;

    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(2);
    s.insert(7);
    s.insert(3);

    for (auto u : s)
    {
        cout << u << space;
    }

    cout << endl;

    // পলিসি বেইসড ডেটা স্ট্রাকচারে সেটের ইরেজ নরমাল STL  এর সেটের মতই।
    //  তবে মাল্টিসেটে ইরেজের ক্ষেত্রে কিছুটা ভিন্নতা আছে !

    s.erase(2);

    for (auto u : s)
    {
        cout << u << space;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}