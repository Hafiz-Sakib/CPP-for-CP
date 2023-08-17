// http://www.shafaetsplanet.com/?p=184

/*
সরাসরি ম্যাট্রিক্স না দিয়ে নোড সংখ্যা,edge সংখ্যা বলে দিয়ে edge গুলো কি কি বলে দিতে পারে,এভাবে:

3 3  //৩ টা নোড এবং ৩টা এজ
1 2 5 //node1-node2-cost
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
    scanf("%d%d", &Node, &Edge);
    for (int i = 0; i < Edge; i++)
    {
        int n1, n2, cost;
        scanf("%d%d%d", &n1, &n2, &cost);
        matrix[n1][n2] = cost;
        matrix[n2][n1] = cost;

        return 0;
    }
}
