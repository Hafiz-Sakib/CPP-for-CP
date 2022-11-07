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
    string str, str_rev;
    cin >> str;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        str_rev.push_back(str[i]);
    }

    if (str == str_rev)
    {
        cout << "Palindrome String\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }

    return 0;
}