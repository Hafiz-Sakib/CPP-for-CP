#include <bits/stdc++.h>
using namespace std;

class batsman
{
private:
    int batsman_code;
    string batsman_name;
    double total_innings, notout_innings, total_runs, batting_avg;

    double calcavg()
    {
        return total_runs / (total_innings - notout_innings);
    }

public:
    void readdata(int code, string name, double total, double notout, int runs)
    {
        batsman_name = name;
        batsman_code = code;
        total_innings = total;
        notout_innings = notout;
        total_runs = runs;
        batting_avg = calcavg();
    }

    void displaydata()
    {
        cout << "The Data members are:" << endl;
        cout << "Batsman code:" << batsman_code << endl;
        cout << "Batsman name:" << batsman_name << endl;
        cout << "Total Innings:" << total_innings << endl;
        cout << "Notout Innings:" << notout_innings << endl;
        cout << "Total Runs : " << total_runs << endl;
        cout << "Batting Average :" << batting_avg << endl;
    }
};

int main()
{
    string name;
    int code;
    double total, notout, runs;
    cout << "Enter Batsman code:";
    cin >> code;
    cout << "Enter Batsman name:";
    cin >> name;
    cout << "Enter Total Innings:";
    cin >> total;
    cout << "Enter Notout Innings:";
    cin >> notout;
    cout << "Enter Total Runs : ";
    cin >> runs;

    batsman batsman1;
    batsman1.readdata(code, name, total, notout, runs);
    batsman1.displaydata();

    return 0;
}
