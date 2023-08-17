// http://www.shafaetsplanet.com/?p=184

#include <bits/stdc++.h>
using namespace std;
int mx = 101;
int main()
{

    /*

    কল্পনা কর একটি গ্রাফ যার ৩টি নোড আছে edge সংখ্যা ৩,এবং সবগুলো edge bidirectional । edge গুলো হলো ১-২(cost ৫),২-৩(cost ৮),১-৩(cost ৩)। এটার adjacency matrix টা কেমন হবে?

    চট করে নিজেই খাতায় একে ফেলতে চেষ্টা কর এবং নিচের উত্তরের সাথে মিলিয়ে দেখো:

    0 5 3
    5 0 8
    3 8 0

    */

    vector<vector<char>> grid(mx, vector<char>(mx));
    int r, c;
    cin >> r >> c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << "Your Grid is :" << endl
         << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
