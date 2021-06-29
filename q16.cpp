#include<iostream>
#include<string>
using namespace std;
//字母往後移
int main()
{
	string in;
	getline(cin,in); //輸入
	int p=0;cin>>p; //更換的數目
	for(int i=0;i<in.length();i++) 
	{
		if((int)in[i]>='A'&&(int)in[i]<='Z') //字串更換大號
		{
			in[i]=(char)(((int)(in[i]-'A')+p)%26+'A'); //先轉型 然後+要換的數目 之後取/26的餘數 在轉型char
		}
		if((int)in[i]>='a'&&(int)in[i]<='z')//字串更換小號
		{
			in[i]=(char)(((int)(in[i]-'a')+p)%26+'a');
		}
		if((int)in[i]>='0'&&(int)in[i]<='9') //數字更換小號
		{
			in[i]=(char)(((int)(in[i]-'0')+p)%10+'0');
		}
	}
	cout<<in<<endl;
    in=" "; 
	return 0;
}