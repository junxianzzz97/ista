#include <iostream>
//算階乘
using namespace std;

int main()
{
    int n,i;
    //int型態會溢位
    long sum=1;
    cin >> n;
    for(i=1; i<=n; i++)
        sum*=i;
    cout << sum << endl;

    return 0;
}