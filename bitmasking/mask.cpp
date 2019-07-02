#include<iostream>
#include<string.h>
using namespace std;
void con_dec(char s,int t)
{
	int arr[64];
	int i=-1;
	while(t>0)
	{
		i++;
		arr[i]=t%2;
		t=t/2;
	}
	cout<<s<<":";
	for(i;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
int main()
{
	int n=512, m=21,j=6,i=2;
	con_dec('n',n);
	con_dec('m',m);
	int start=~0;
	con_dec('i',start);
	j++;
	start=start-((1<<j)-1);
	con_dec('f',start);
	int end=(1<<i)-1;
	con_dec('e',end);
	int mask=start|end;
	con_dec('m',mask);
	int ans=(mask&n)|(m<<i);
	con_dec('a',ans);
	return 0;
}
