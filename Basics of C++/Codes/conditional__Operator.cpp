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
    int age;
    cout << "Enter your age :\n";
    cin >> age;
    (age >= 18) ? cout << "eligable for voting \n" : cout << "Not eligble for votiong;";
    return 0;
}