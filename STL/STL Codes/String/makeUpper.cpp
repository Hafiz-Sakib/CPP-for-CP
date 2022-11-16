#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;
    string s = "SaKiB", p;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        c = toupper(c);
        p = p + c;
    }
    cout << p;

    return 0;
}