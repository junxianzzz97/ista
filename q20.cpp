#include <iostream>
using namespace std;
//題目25. 字串之編碼數值總和
int main()
{
 int testcase;
 cin >> testcase;
 string str = "\n";
 while (testcase--) {
        getline(cin, str); // 切割 \n 
        int sum = 0;
        for (unsigned int i = 0; i < str.length(); i++) { //利用字串長度 進行加法 
            if((int)str[i] > 31 && (int)str[i] < 127) //轉型int 
                sum += (int)str[i];
        }
        if (sum != 0)
            cout << sum << endl;
        else
            testcase++;
 }
 return 0;
}