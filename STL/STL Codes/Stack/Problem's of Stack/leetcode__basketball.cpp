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
int main()
{
    Boost;
    vector<string> vec = {"5", "2", "C", "D", "+"};

    /*

    Input: vec = ["5","-2","4","C","D","9","+","+"]
    Output: 27

    Input: vec = ["1","C"]
    Output: 0

    */

    stack<int> st;

    for (auto u : vec)
    {
        if (u.size() > 1)
        {
            st.push(stoi(u));
        }
        else if (isdigit(u[0]))
        {
            st.push(u[0] - '0');
        }
        else if (u[0] == '+')
        {
            int a1 = -1, a2 = -1;

            if (!st.empty())
            {
                a1 = st.top();
                st.pop();
            }

            if (!st.empty())
            {
                a2 = st.top();
                st.pop();
            }

            if (a2 != -1)
            {
                st.push(a2);
                st.push(a1);
                st.push(a1 + a2);
            }

            else if (a1 != -1)
            {
                st.push(a1);
            }
        }
        else if (u[0] == 'D')
        {
            if (!st.empty())
            {
                st.push(2 * st.top());
            }
        }
        else
        {
            if (!st.empty())
                st.pop();
        }
    }

    long long ans = 0;

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
    return 0;
}

// https://leetcode.com/problems/baseball-game/description/
