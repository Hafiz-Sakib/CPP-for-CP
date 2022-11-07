#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
int main()
{

    Boost;

    //যখন শুধুমাত্র Setprecision(num) দিব ,তখন দশমিকের  আগে ও পরে ,মিলে Setprecision() এর ভিতরের থাকা নাম্বার সংখ্যক (এখানের জন্য ৫ ) ডিজিট প্রিন্ট করবে

    //কিন্ত যখন Setprecision()  এর আগে fixed  ব্যবহার করব তখন শুধুমাত্র দশমিক এর পরে setprecision() এর ভিতরে থাকা number এর  সংখ্যক ডিজিট প্রিন্ট করবে

    double a = 10.10;
    double b = 100.1546;
    cout << a * b << endl;
    cout << setprecision(1) << a * b << endl;

    cout << fixed << setprecision(1) << a * b << endl;

    return 0;
}