#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,4,5,6,7,6,5,11,4,3,2};
	int n=sizeof(arr)/sizeof(int);
	int i,ans=0;
	for(i=0;i<n;i++)
	{
		ans=ans^arr[i];
	}
	int temp=ans,pos=-1;
	while(temp>0)
	{
		pos++;
		if(temp&1)
		break;
		else
		temp=temp>>1;
	}
	int setA=0,setB;
	for(i=0;i<n;i++)
	{
		if(arr[i]&1<<pos)
		setA^=arr[i];
	}
	setB=ans^setA;
	cout<<"the unique elements are "<<setA<<" and "<<setB<<endl;
}
