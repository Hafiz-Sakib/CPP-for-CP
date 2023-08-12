#include <bits/stdc++.h>
using namespace std;

/*

                  fibo(4)
                 /            \
           fibo(3)           fibo(2)
         /         \         /         \
     fibo(2)    fibo(1)    fibo(1)   fibo(0)
     /     \
fibo(1)   fibo(0)


*/

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << fibo(i) << ' ';
    }

    return 0;
}
