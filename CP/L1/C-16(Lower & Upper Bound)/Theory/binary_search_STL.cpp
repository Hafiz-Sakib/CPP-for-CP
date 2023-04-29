#include <bits/stdc++.h>
using namespace std;

#define here fprintf(stderr, "====I am Here====\n");

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // To Use the built in function.The Vector must be Sorted.

    int result = binary_search(v.begin(), v.end(), 2);

    cout << result << endl;
}

int main()
{
    Boost;
    Boom();

    return 0;
}