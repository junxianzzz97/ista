#include <iostream>

using namespace std;
//計算時間的組合
int main()
{
    int s,days,hours,minutes,seconds;
    cin >> s;
    days = s/86400;
    hours = (s%86400)/3600;
    minutes = (s%3600)/60;
    seconds = s%60;
    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;

    return 0;
}