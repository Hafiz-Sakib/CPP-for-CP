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
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    // a and b array er 1st and last index er value swap korte hbe...

    // pair use kore ei 2 ta array ke ekta pair e niye ashlam:

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    // loop use kore value gula dekhi :

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    // swap korbo swap func diye :
    swap(p_array[0], p_array[2]);

    // print after swap :

    cout << "After Swap\n";

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    return 0;
}