#include<iostream>
#include<string>
#include<sstream>
using namespace std;
//
int main()
{
 int arr[6] = {0};
 int i = 0;
 string str;
 getline(cin,str);
 stringstream ss(str);
 while (ss >> arr[i++]) //轉型int loop 6次 i=7
 {
  
 }

 for (int j = i - 2;j >= 0; j--) //i-2 = 5 loop 5次
 {
  if (j < i - 2)
  cout << " ";
  cout << arr[j];
 }
 cout << endl;
 return 0;
}