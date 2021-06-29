#include<iostream>
using namespace std;
// 停車費計算
int main()
{
	int startH=0,startM=0,endH=0,endM=0;
	
	cin>>startH>>startM;// star time 
	cin>>endH>>endM;// end time
	int time=(endH*60+endM)-(startH*60+startM);//計算總時數 
	if(time<=120&&time>=0) // 2小時以內，每半小時30元
        cout<<time/30*30<<endl;
	else if(time>120&&time<=240)  //超過2小時，但未滿4小時的部份,每半小時40元
        cout<<(time-120)/30*40+120<<endl;
	else 
        cout<<(time-240)/30*60+120+160<<endl;// 超過4小時以上的部份，每半小時60元
	
	
	return 0;
}