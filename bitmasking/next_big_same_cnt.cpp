#include<iostream>
using namespace std;
void con_dec(int t)
{
	int no=t;
	int arr[64];
	int i=-1,flag=0,k;
	while(t>0)
	{
		i++;
		arr[i]=t%2;
		t=t/2;
	}
	i++;
	arr[i]=0;
	int temp=i;
	for(temp;temp>=0;temp--)
	{
		cout<<arr[temp];
	}
	cout<<endl;
	temp=i;
	for(i=0;i<=temp;i++)
	{
	if(arr[i]==1)
	flag++;
	else if(arr[i]==0&&flag>0)
	{
	k=i-1;
	int start=~0;
	i++;
	start=start-((1<<i)-1);
	no=no&start;
	cout<<no<<endl;
	break;
	}
	}
	i--;
	int ans1=(1<<i)|((1<<k)-1);
	int ans2=no|ans1;
	cout<<ans2<<endl;
}
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	con_dec(n);
}
