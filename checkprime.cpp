#include<iostream>
using namespace std;

int main()
{
	int N,c;
	cin>>N;
	c=0;
	for(int i=2;i<N/2;i++)
	{
		if(N%i==0)
		c++;
	}
	if(c==0)
	cout<<"Number is prime";
	else
	cout<<"Number is not prime";	
}
