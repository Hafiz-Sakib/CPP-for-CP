// http://www.shafaetsplanet.com/?p=184

/*
সরাসরি ম্যাট্রিক্স না দিয়ে নোড সংখ্যা,edge সংখ্যা বলে দিয়ে edge গুলো কি কি বলে দিতে পারে,এভাবে:

3 3  //৩ টা নোড এবং ৩টা এজ
1 2 5 //node1-node2-cost => 1 to 2 -> Cost 5 (Vice-Versa because Bi-Directional)
2 3 8
1 3 3

এটা ইনপুট নিব এভাবে:
*/

#include <bits/stdc++.h>
using namespace std;
int mx = 101;
int main()
{
    int Node, Edge;
    int matrix[100][100];
    cin >> Node >> Edge;
    for (int i = 0; i < Edge; i++)
    {
        int n1, n2, cost;
        cin >> n1 >> n2 >> cost;
        matrix[n1][n2] = cost; // n1 to n2 cost = cost
        matrix[n2][n1] = cost; // n2 to n1 cost = cost
        return 0;
    }
}
