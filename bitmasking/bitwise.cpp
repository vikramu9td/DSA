#include<iostream>
using namespace std;
void con_dec(int t)
{
	int arr[64];
	int i=-1;
	while(t>0)
	{
		i++;
		arr[i]=t%2;
		t=t/2;
	}
	for(i;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
void chk_eve_odd(int n)
{
	if(n&1)
	cout<<"odd"<<endl;
	else
	cout<<"even"<<endl;
}
void get_i_bit(int n)
{
	cout<<"enter the pos"<<endl;
	int i;
	cin>>i;
	if(n&(1<<i-1))
	cout<<"1"<<endl;
	else
	cout<<"0"<<endl;
}
void set_i_bit(int &n)
{
	cout<<"enter the pos"<<endl;
	int i;
	cin>>i;
	n=n|(1<<i-1);
}
void check_bits(int n)
{
	int ans=0;
	while(n>0)
	{
		n=n&n-1;
		ans++;
	}
	cout<<ans<<endl;
}
int main()
{
	cout<<"insert number"<<endl;
	int n;
	cin>>n;
	con_dec(n);
	chk_eve_odd(n);
	get_i_bit(n);
	set_i_bit(n);
	check_bits(n);
	cout<<__builtin_popcount(n)<<endl;
	return 0;	
}
