#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
typedef tree<int, null_type, greater<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    desending_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    multi_set;

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
