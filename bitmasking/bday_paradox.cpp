#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the probability"<<endl;
	float p;
	cin>>p;
	float ans=1.0;
	int cnt=0;
	int num=365;
	while(ans>=(1-p))
		{
			ans=ans*(num/365.0);
			num--;
			cnt++;
		}
	cout<<"probability: "<<1-ans<<"    people: "<<cnt<<endl;
}
