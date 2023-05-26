#include<iostream>
using namespace std;

bool pytho(int a,int b,int c)
{
	int x,y,z;
	x=max(a,max(b,c));
	
	if(x==a)
	{
		y=b;
		z=c;
	}
	else if(x==b)
	{
		y=a;
		z=c;
	}
	else 
	{
		y=a;
		z=b;
	}
	if(x*x==y*y+z*z)
	return true;
	else 
	return false;
}
int main()
{
	int h,b,p;
	cin>>h>>b>>p;
	if(pytho(h,b,p))
	cout<<"Yes";
	else 
	cout<<"No";
	return 0;
}
