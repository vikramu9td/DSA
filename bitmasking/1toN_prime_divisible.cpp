#include<iostream>
using namespace std;
int main()
{
	int prims[]={2,3,5,7,9,11,13,17,19};
	int cnt=sizeof(prims)/sizeof(int);
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=((1<<cnt)-1);i++)
	{
		long long int denom=1,j=0,flag=0;
		int temp=i;
		while(temp>0)
		{
			if(temp&1){
			denom=denom*prims[j];
			flag++;
			}
			j++;
			temp=temp>>1;
		}
		if(flag&1)
		{
			ans=ans+n/denom;
		}
		else
		{
			ans=ans-n/denom;
		}
	}
	cout<<ans;
}
