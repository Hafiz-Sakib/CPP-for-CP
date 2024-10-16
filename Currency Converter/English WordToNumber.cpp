#include <iostream>
using namespace std;

string one[] = {"", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "};

string ten[] = {"", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "};

string numToWords(int n, string s)
{
    string str = "";
    if (n > 19)
        str += ten[n / 10] + one[n % 10];
    else
        str += one[n];
    if (n)
        str += s;
    return str;
}

string convertToWords(long n)
{
    string out;
    out += numToWords((n / 10000000), "crore ");
    out += numToWords(((n / 100000) % 100), "lakh ");
    out += numToWords(((n / 1000) % 100), "thousand ");
    out += numToWords(((n / 100) % 10), "hundred ");
    if (n > 100 && n % 100)
        out += "and ";
    out += numToWords((n % 100), "");
    if (out == "")
        out = "zero";
    return out;
}

int main()
{
    long depositAmount = 1000;
    long previousAmount = 1803593;
    long currentAmount = 1853765;
    long profit = (currentAmount - previousAmount) - depositAmount;

    cout << "Deposit Amount: " << convertToWords(depositAmount) << endl;
    cout << "Previous Amount: " << convertToWords(previousAmount) << endl;
    cout << "Current Amount: " << convertToWords(currentAmount) << endl;
    cout << "Profit: " << convertToWords(profit) << endl;

    return 0;
}