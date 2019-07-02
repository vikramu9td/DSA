#include<iostream>
using namespace std;
int fun1(int *y)
{
	*y=*y+1;
}
void fun2(int &y)
{
	y++;
}
int main()
{
	int x=10;
	fun1(&x);
	cout<<x<<endl;
	fun2(x);
	cout<<x;
}
