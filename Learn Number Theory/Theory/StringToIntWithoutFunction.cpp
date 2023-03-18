#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    string s = "422";
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' || s[i] <= '9')
        {
            ans = ans * 10 + s[i] - '0';
        }
    }
    cout << ans;
}

int main()
{
    Boost;
    Boom();

    return 0;
}
