// https://lightoj.com/problem/triangle-partitioning

// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
const double eps = 1e-12;
#define setp(n) fixed << setprecision(n)

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

void Boom(int t)
{
    double AB, AC, BC, R;
    cin >> AB >> AC >> BC >> R;
    double l = 0, r = AB, AD, AE, DE, x;

    for (int i = 0; i < 100; i++)
    {
        AD = (l + r) / 2.0;

        x = AD / AB;
        AE = AC * x;
        DE = BC * x;

        double periADE = (AD + AE + DE) / 2.0;
        double periABC = (AB + AC + BC) / 2.0;

        double areaADE = sqrt(periADE * (periADE - AD) * (periADE - AE) * (periADE - DE));
        double areaABC = sqrt(periABC * (periABC - AB) * (periABC - AC) * (periABC - BC));

        double areaTrapezium = areaABC - areaADE;

        if ((areaADE / areaTrapezium) > R)
        {
            r = AD;
        }
        else
        {
            l = AD;
        }
    }

    cout << "Case " << t << ": " << setp(10) << l << endl;
}

int main()
{
    Boost;

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Boom(i);
    }

    return 0;
}
