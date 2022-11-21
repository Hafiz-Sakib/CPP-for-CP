#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string x = "Timur";
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(x.begin(), x.end());
        sort(s.begin(), s.end());
        cout << (x == s ? "YES" : "NO") << '\n';
    }
    return 0;
}

/*
#include <bits/stdc++.h>

#define f first
#define s second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

ll mod = 1e9 + 7;
ll base = 1e6 + 9;
ll inf = 1e18;
int MAX = 1e6;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    string t = "Timur";
    sort(all(t));
    sort(all(s));
    cout << (s == t? "YES" : "NO") << '\n';
}

int main() {
    srand(time(NULL));
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int ttt = 1;
    cin >> ttt;
    int ttt0 = ttt;
    while(ttt--) {
        solve();
    }
}
 */