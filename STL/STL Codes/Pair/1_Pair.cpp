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

    //  declaration :
    pair<int, string> p;

    // initialization:

    p = make_pair(5, "Sakib");
    // or

    p = {10, "Hafiz"};

    // print :
    cout << p.first << " " << p.second;

    // make copy by value :
    pair<int, string> p1;

    p1 = p;

    p1 = {15, "Harry"};

    cout << endl
         << p1.first << " " << p1.second;

    // make copy by refrences

    pair<int, string> &p2 = p; // p2 er kisu change kole p teo change hye jaabe

    p2.first = 16;
    p2.second = "ChangedSakib";

    cout << endl
         << p.first << " " << p.second;

    cout << endl
         << p2.first << " " << p2.second;

    return 0;
}