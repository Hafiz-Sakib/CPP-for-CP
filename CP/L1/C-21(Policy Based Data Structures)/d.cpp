#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define D(x) cout << (#x) << " is " << x << endl;
#define Q            \
    int t;           \
    scanf("%d", &t); \
    for (int q = 1; q <= t; q++)
typedef long long int lli;
typedef pair<lli, lli> pi;
template <typename T>
using o_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).(itterator)

// Debugger Started
#define here fprintf(stderr, "====I am Here====\n");
template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define debug(args...)          \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}
// Debugger Ends

lli a[200005];

int main()
{
    int n;
    lli t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }

    o_set<pi> pb;

    for (int i = 0; i < n; i++)
    {
        pb.insert({a[i], i});
    }

    lli ans = 0;
    lli pre = 0;

    for (int i = 0; i < n; i++)
    {
        ans += pb.order_of_key({t + pre, 0});
        debug(pb);
        pb.erase({a[i], i});
        pre = a[i];
    }

    //   cout << ans << endl;

    return 0;
}
