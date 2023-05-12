//  https://vjudge.net/problem/UVA-543

// একটা নাম্বার  n দেওয়া হবে,সে নাম্বারটা কে দুটি বিজোড় প্রাইম নাম্বারের যোগফল আকারে প্রকাশ করতে হবে এবং খেয়াল রাখতে হবে নাম্বার দুটির ডিফারেন্স যেন ম্যাক্সিমাম হয়।

// যেমন => ২০ কে (১৩ + ৭) এবং (১৭ + ৩) এই দুইভাবেই প্রকাশ করা যায় ,তবে আমরা ম্যাক্সিমাম ডিফারেন্সের পেয়ার টাই নিবো (১৭,৩)।

#include <bits/stdc++.h>
using namespace std;

const int mx = 1e8 + 123;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<bool> isPrime(mx, 1);
vector<int> Prime;

void sieve(int n)
{
    isPrime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            isPrime[j] = 0;
        }
    }
    isPrime[2] = 0;
    for (int i = 3; i <= n; i++)
    {
        if (isPrime[i])
        {
            Prime.push_back(i);
        }
    }
}

int main()
{
    Boost;
    sieve(1e6);
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int diff = -1, p1 = -1, p2 = -1;
        for (auto u : Prime)
        {
            if (u > n)
            {
                break;
            }
            int tp1 = u, tp2 = n - tp1;
            if (tp2 > 2 && isPrime[tp2])
            {
                if (abs(tp1 - tp1) > diff)
                {
                    diff = abs(tp1 - tp2);
                    p1 = tp1;
                    p2 = tp2;
                }
            }
        }

        if (p1 == -1)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
        else
        {
            cout << n << " = " << p1 << " + " << p2 << endl;
        }
    }

    return 0;
}
