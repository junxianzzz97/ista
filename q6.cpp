#include<iostream>
#include<string>
using namespace std;
//判斷是否為迴文
int main()
{
	string input,output;
	bool a=1; 
	
	cin>>input;
	for(int i=input.length()-1;i>=0;i--)//將字串逆序傳到output 
	{
		output[input.length()-1-i]=input[i];
	}
	for(int j=0;j<input.length();j++)//比較是否有異 
	{
		if(input[j]!=output[j]){ 
            a=0;
            break;
            }
		else a=1;
	}
	a? cout<<"YES"<<endl:cout<<"NO"<<endl;//輸出結果 
	return 0;
} 