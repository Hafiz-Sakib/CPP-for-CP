#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void swap(int &n, int &m)
{
    int t;
    t = n;
    n = m;
    m = t;
}

int main()
{
    Boost;
    int a = 3;
    int b = 5;
    cout << "Before Swap : " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swap : " << a << " " << b << endl;
    return 0;
}