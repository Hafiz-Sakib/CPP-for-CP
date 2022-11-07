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
    double a = 1.22546541;
    double b = 4.2241;
    double c = a + b;

    cout << setprecision(5) << c << endl;

    //যখন শুধুমাত্র Setprecision(num) দিব ,তখন দশমিকের  আগে ও পরে ,মিলে Setprecision() এর ভিতরের থাকা নাম্বার সংখ্যক (এখানের জন্য ৫ ) ডিজিট প্রিন্ট করবে
    // output : 13.123
    //এখামে দশমিকের আগে দুই ডিজিট ১৩ ও দশমিকের পরে তিন ডিজিট ১২৩ প্রিন্ট করবে

    cout << fixed << setprecision(2) << c << endl;

    //কিন্ত যখন Setprecision()  এর আগে fixed  ব্যবহার করব তখন শুধুমাত্র দশমিক এর পরে setprecision() এর ভিতরে থাকা number এর  সংখ্যক ডিজিট প্রিন্ট করবে
    // output : 13.12
    //এখামে দশমিকের পরে শুধুমাত্র দুই ডিজিট প্রিন্ট করবে

    return 0;
}