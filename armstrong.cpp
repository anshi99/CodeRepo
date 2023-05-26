#include<iostream>
using namespace std;

int main()
{
	int arm,N,a,s=0;
	cin>>N;
	arm=N;
	while(N>0)
	{
		a=N%10;
		s=s+(a*a*a);
		N=N/10;
	}
	if(arm==s)
	cout<<"Armstrong";
	else
	cout<<"Not Armstrong";
}
