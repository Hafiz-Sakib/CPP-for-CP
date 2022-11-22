// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define Boost                         \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL)
// int main()
// {
//     Boost;
//     // You are given a string that is made up of words separated by spaces. Your task is to find the word with highest frequency, i.e. it appears maximum times in the sentence. If multiple words have maximum frequency, then print the word that occurs first in the sentence.

//     int t;
//     cin >> t;
//     while (t--)
//     {

//         map<string, int> m;

//         string s;
//         char c;
//         cin >> c;
//         getline(cin, s); // the devil in the sky
//         s = c + s;
//         m[s]++;

//         int max = 0;
//         string ans;
//         for (auto u : m)
//         {
//             if (u.second > max)
//             {
//                 max = u.second;
//                 ans = u.first;
//             }
//         }
//         cout << ans << " " << max << endl;
//     }
//     return 0;
// }
