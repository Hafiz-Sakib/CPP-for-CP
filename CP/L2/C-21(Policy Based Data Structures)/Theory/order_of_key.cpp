#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    ordered_set s;
    s.insert(4);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    s.insert(2);

    cout << s.size() << endl;

    for (auto u : s)
    {
        cout << u << " ";
    }

    cout << s.order_of_key(3) << endl;

    // ৩ এর চাইতে কয়টা ছোট ভ্যালু আছে সেটা রিটার্ন করবে এই ফাংশন !
}

int main()
{
    Boost;
    Boom();
    return 0;
}
