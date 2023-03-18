#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int largestPrimeInRange(int start, int end)
{
    int largestPrime = -1;
    for (int i = end; i >= start; i--)
    {
        if (isPrime(i))
        {
            largestPrime = i;
            break;
        }
    }
    return largestPrime;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int start, end;
        cin >> start >> end;
        int largestPrime = largestPrimeInRange(start, end);
        if (largestPrime != -1)
        {
            cout << largestPrime << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
