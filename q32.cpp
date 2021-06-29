#include <iostream>
#include <cmath>
//相遇時間計算
using namespace std;

int main()
{
    //dist表distance,t表秒數
    double dist,t;
    cin >> dist;
    //換成公分
    dist *=100;
    t=dist/(100-30*2.54);
    //無條件進位
    cout << ceil(t) << endl;

    return 0;
}