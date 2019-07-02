#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,4,5,6,7,6,5,4,3,2};
	int n=sizeof(arr)/sizeof(int);
	int i,ans=0;
	for(i=0;i<n;i++)
	{
		ans=ans^arr[i];
	}
	cout<<"unique element is "<<ans;
}
