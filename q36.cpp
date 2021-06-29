#include <iostream>
#include <iomanip>
//計算薪水
using namespace std;

int main()
{
    int hour,pay;
    double salary=0;
    cin >> hour >> pay;
    if(hour<=60) 
        salary=hour*pay;
    else if(hour>60 and hour<121)
        salary=(60*pay)+(hour-60)*pay*1.33;
    else if(hour>=121)
        salary=(60*pay*2.33)+(hour-120)*pay*1.66;
    cout << fixed << setprecision(1) << salary << endl;

    return 0;
}