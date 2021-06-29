#include <iostream>
#include <iomanip>
//攝氏溫度轉華式溫度
using namespace std;

int main()
{
    double c,f;
    cin >> c;
    f=c*(9.0/5.0)+32; //轉華式溫度
    cout << fixed << setprecision(1) << f << endl;

    return 0;
}