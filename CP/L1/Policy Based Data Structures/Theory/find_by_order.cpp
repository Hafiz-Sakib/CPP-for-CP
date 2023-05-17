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

    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(2);
    s.insert(7);
    s.insert(3);

    // find_by_order(k) – ফাংশনটি kth ordered element এর একটা পয়েন্টার রিটার্ন করে। অর্থাৎ তুমি চাইলেই kth ইন্ডেক্সে কি আছে, সেটা জেনে ফেলতে পারছো!

    // Works For Both Set and Multiset!

    // set_name.find_by_order(index)

    cout << *s.find_by_order(1) << endl;

    for (int i = 0; i < s.size(); i++)
    {
        cout << *s.find_by_order(i) << ' ';
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}