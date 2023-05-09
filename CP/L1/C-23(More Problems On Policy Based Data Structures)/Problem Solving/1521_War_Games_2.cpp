// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long int ll;

typedef tree<ll, null_type, less<ll>, rb_tree_tag,
             tree_order_statistics_node_update>
    orderedSet;

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
    int n, k;
    cin >> n >> k;

    orderedSet s;
    orderedSet::iterator it;

    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }

    int cur = 0;

    while (n)
    {
        cur = (cur + k - 1) % n;
        it = s.find_by_order(cur);
        cout << *it << space;
        s.erase(it);
        n--;
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}