#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int a[N][N];
void func()
{
    a[0][0] = 5;
}
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{
    Boost;

    a[0][0] = 7;
    cout << a[0][0] << endl;
    func();
    cout << a[0][0] << endl;

    return 0;
}