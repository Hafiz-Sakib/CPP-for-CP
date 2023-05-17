// Erase in Set PBDS

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
    s.insert(8);
    s.insert(2);
    s.insert(7);
    s.insert(3);

    for (auto u : s)
    {
        cout << u << ' ';
    }

    cout << endl;

    // পলিসি বেইসড ডেটা স্ট্রাকচারে সেটের ইরেজ নরমাল STL  এর সেটের মতই।
    //  তবে মাল্টিসেটে ইরেজের ক্ষেত্রে কিছুটা ভিন্নতা আছে !

    s.erase(2);

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