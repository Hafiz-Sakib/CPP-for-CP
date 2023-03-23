#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

vector<int> v;
int n;
void subset(int k)
{
    if (k > n)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    v.push_back(k);
    subset(k + 1);
    v.pop_back();
    subset(k + 1);
}

int main()
{
    cin >> n;
    subset(1);
    return 0;
}