#include<iostream>
#include<sstream>
using namespace std;
//找零錢問題


int main(){
	string input,str;
	int mon[4];
	
	getline(cin,input);
	istringstream cut(input);
	for(int i=0;i<4;i++)//逐一拆字讀入陣列 
	{
		getline(cut,str,',');
		istringstream sa(str); //轉型
		sa>>mon[i];
	}
	if(mon[0]>mon[1]*15+mon[2]*20+mon[3]*30)//判定零錢是否足夠, *15,20,30買東西的數量
	{
		mon[0]=mon[0]-mon[1]*15-mon[2]*20-mon[3]*30;//結算剩餘金額 
		mon[2]=mon[0]/50;  //找50塊
        mon[0]%=50;    
		mon[1]=mon[0]/5; //找5塊
        mon[0]%=5;
		cout<<mon[0]<<","<<mon[1]<<","<<mon[2]<<endl;return 0;
	}
	else cout<<"0"<<endl;return 0;//金額不足 
    return 0;
}