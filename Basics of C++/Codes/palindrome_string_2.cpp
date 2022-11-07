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
    string str;
    // cin >> str;
    getline(cin, str);
    int size = str.size();
    int flag = 1;
    for (int i = 0; i < size / 2; i++)
    {
        size--;
        if (str[i] != str[size]) // [size - 1 - i]
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}