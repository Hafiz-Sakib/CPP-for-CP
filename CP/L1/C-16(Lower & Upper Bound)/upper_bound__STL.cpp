#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
void Boom()
{
    vector<int> v = {1, 2, 2, 2, 2, 2, 3, 3, 4};
    int x = upper_bound(v.begin(), v.end(), 3) - v.begin();
}

int main()
{
    Boost;
    Boom();
    return 0;
}
