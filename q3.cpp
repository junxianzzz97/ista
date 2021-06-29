#include<iostream>
using namespace std;
// 判斷座標是否在圓形的範圍內
int main()
{
	int inputx=0,inputy=0;
	while(cin>>inputx>>inputy)  
	{
		if(inputx*inputx+inputy*inputy <= 10000) ////若X ^2 + Y^2 <= 半徑(100)的平方
            cout<<"inside"<<endl;
		
		else 
            cout<<"outside"<<endl;
	}
	
	return 0;
}