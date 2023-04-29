// https://www.spoj.com/problems/BSEARCH1/

/*
Problem Statement
You are given a sorted array of numbers, and followed by number of queries, for each query if the queried number is present in the array print its position, else print -1.

Input
First line contains N Q, number of elements in the array and number of queries to follow,

Second line contains N numbers, elements of the array, each number will be -10^9<= ai <= 10^9, 0 < N <= 10^5, 0 < Q <= 5*10^5

Output
For each element in the query, print the elements 0 based location of its first occurence, if present, otherwise print -1.

*/

#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define all(data) data.begin(), data.end()
#define b() begin()
void Boom()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (q--)
    {
        int x;
        cin >> x;
        int lb = lower_bound(all(v), x) - v.b();

        if (lb == v.size())
        {
            cout << -1 << endl;
        }
        else if (v[lb] != x)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << lb << endl;
        }
    }
}

int main()
{
    Boost;
    Boom();
    return 0;
}
