#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;
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

// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

typedef long long int ll;
const double eps = 1e-12;
const int mx = 1e8 + 123;

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
}

int main()
{
    Boost;
    Boom();
    return 0;
}
