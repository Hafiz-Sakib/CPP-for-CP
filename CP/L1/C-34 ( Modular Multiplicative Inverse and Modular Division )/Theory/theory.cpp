// https://www.youtube.com/watch?v=Gd9w8m-klho&t=535s

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mod 1000000007

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int BinaryExponentiation(int b, int p)
{
    int ans = 1;
    while (p)
    {
        if (p & 1)
        {
            ans = (ans * 1LL * b) % mod;
        }
        b = (b * 1LL * b) % mod;
        p >>= 1;
    }
    return ans;
}

/*
There are N Children and K Toffies . K < N
count the number of ways to distribute toffie among N studnets such that each students get 1 toffie only.
There Will be q queries , You Have to answer for each query.
limits : N < 10^6 , K < N < 10^6
Solution =>
1 Toffie only --> nCk % M ; M = 1e9+7;
Approach :
nCk => n! / ( (n-r) ! * r! ); We Have to use Modular Division Here
*/

const int mx = 1e6 + 123;
int fact[mx];

int main()
{
    Boost;
    fact[0] = 1;
    for (int i = 1; i <= mx; i++)
    {
        fact[i] = (fact[i - 1] * 1LL * i) % mod;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact[n];
        int den = (fact[n - k] * 1LL * fact[k]) % mod;
        /*

         So,Basically We Have to Just Print -->
         nCk = > n ! / ((n - r) !* r !)
        এখানে ভাগের কাজ টা করার জন্য আমাদের মডুলার ডিভিশন এর হেল্প নিতে হবে,যেখানে -->
        সূত্রানুযায়ী ঃ
        (A / B ) % M = (A * B^-1 ) % M
        সুতরাং ঃ  B = ((n - r) !* r !)
        সো, আমাদেরকে বি এর মডুলার মাল্টিপ্লিকেটিভ ইনভার্স (B^-1) বের করা লাগবে ,যার সূত্র ফার্মেট লিটল থিওরেম অনুযায়ী -->
        ( B^M-2 % M) = B^-1
        আবার,এখানে ( B^M-2 ) বাইনারী এক্সপোনেন্সিয়েশন এর মাধ্যমে সল্ভ করা যায়।
        সো,আমি (B^-1) বের করার জন্য বাইনারী এক্সপোনেন্সিয়েশন ফাংশনে
        বেইস = B or (fact[n - k] * 1LL * fact[k]) কে পাঠিয়েছি এবং
        পাওয়ার = mod - 2 কে পাঠিয়েছি
        শেষে সূত্রানুযায়ী  ঃ (A / B ) % M = (A * B^-1 ) % M
        A এবং B^-1 কে গুন করে মড করে দিসি
         */

        ans = (ans * 1LL * BinaryExponentiation(den, mod - 2)) % mod;
        cout << ans << endl;
    }

    return 0;
}
