#include<iostream>
using namespace std;
// 遞迴程式練習

int f (int input)
{
	if(input==0||input==1)//當輸入值為1或0 n+1
	{
		return input+1;
	}
	else return f(input-1)+f((input/2));// n-1 + [n/2]
	
} 

int main()q
{
	int input=0;
	
	cin >> input;//輸入整數 
	cout<< f(input)<<endl;//輸出函式的值 
	
	return 0;
}
