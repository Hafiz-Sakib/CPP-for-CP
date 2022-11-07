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

    // 1. Take Input after a Space

    string a;
    getline(cin, a);
    cout << a << endl;

    // 2. concat or addition of 2 Strings

    string str1 = "Hello";
    string str2 = "World";
    cout << str1 + " " + str2 << endl;

    // 3. Compare Two String

    if (str1 == str2)
    {
        cout << "same string" << endl;
    }
    else
    {
        cout << "not same string" << endl;
    }

    return 0;
}