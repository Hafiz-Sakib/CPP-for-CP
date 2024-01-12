#include <bits/stdc++.h>
using namespace std;
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    Boost;
    int n;
    cin >> n;
    ignore;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        int k = s[i] - n;
        if (k < 97)
        {
            k += 26;
        }

        s[i] = k;
    }
    cout << s << endl;
    return 0;
}
