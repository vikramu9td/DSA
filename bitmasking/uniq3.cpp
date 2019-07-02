#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,4,5,6,7,6,5,4,3,2,6,5,4,3,2};
	int cnt[64]={0};
	int n= sizeof(arr)/sizeof(int);
	int i;
	for(i=0;i<n;i++)
	{
	int temp=arr[i];
	int j=0;
	while(temp>0)
	{
		if((temp&1)>0)
		cnt[j]++;
		j++;
		temp=temp>>1;
	}
	}
	int tp=1,ans=0;
	for(i=0;i<64;i++)
	{
		ans=ans+(cnt[i]%3)*tp;
		tp=tp<<1;
	}
	cout<<"unique number is "<<ans;
}
