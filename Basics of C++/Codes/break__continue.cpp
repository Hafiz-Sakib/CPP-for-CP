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
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8) // jokhn e i er value 8 hbe tokhn loop off hoye jaabe
        {
            break;
            // break and continue immediate  loop & condition er upor kaj korbe
        }
        cout << i << " ";
    }

    cout << endl;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 8) // jokhn e i er value 8 hbe tokhn loop 8 ke skip kore jabe    // continue muloto last statement e nie jabe
        {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}