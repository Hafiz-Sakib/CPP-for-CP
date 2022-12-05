/*

string author;
author = Hafiz_Sakib;

*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ignore cin.ignore(numeric_limits<streamsize>::max(), '\n')
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int n;

vector<int> cnt[26 * 26 * 26];

int answer[3];

void Boom()
{
    // Let's Move
    cin >> n;
    for (int i = 0; i < 26 * 26 * 26; i++)
    {
        cnt[i].clear();
    }
    answer[0] = answer[1] = answer[2] = 0;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            string s;
            cin >> s;
            cnt[(s[0] - 'a') * 26 * 26 + (s[1] - 'a') * 26 + (s[2] - 'a')].push_back(i);
        }
    }
    for (int i = 0; i < 26 * 26 * 26; i++)
    {
        if (!cnt[i].size())
        {
            continue;
        }
        if (cnt[i].size() == 1)
        {
            answer[cnt[i][0]] += 3;
        }
        if (cnt[i].size() == 2)
        {
            answer[cnt[i][0]]++;
            answer[cnt[i][1]]++;
        }
    }
    cout << answer[0] << " " << answer[1] << " " << answer[2] << endl;
}

int main()
{
    Boost;

    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<"Case "<<t<<" : ";
        Boom();
    }

    return 0;
}
