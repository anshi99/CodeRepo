#include<iostream>
using namespace std;

int fibo(int n)
{
	int a,b,c;
	a=0;
	b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=1;i<=n-2;i++)
	{
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	cin>>n;
	fibo(n);
	return 0;
}
