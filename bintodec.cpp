#include<iostream>
#include<cmath>
using namespace std;

int bintodec(int n)
{
	int r,s=0;
	for(int i=0;n>0;i++)
	{
		r=n%10;
		s=s+(r*pow(2,i));
		n=n/10;
	}
	return s;
}
int main()
{
	int N;
	cin>>N;
	cout<<bintodec(N);
	return 0;
}
