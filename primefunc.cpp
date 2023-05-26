#include<iostream>
using namespace std;

int prime(int num)
{
	int c;
	c=0;
	for(int j=1;j<=num;j++)
	{
		if(num%j==0)
		c++;
	}
	return c;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(prime(i)==2)
		cout<<i<<endl;
	}
	return 0;
} 
