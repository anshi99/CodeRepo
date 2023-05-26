#include<iostream>
using namespace std;

int main()
{
	int N,a=0;
	cin>>N;
	for(int i=2;i<=N-1;i++)
	{
		if(N%i==0)
		continue; 
	}
	cout<<"number is prime"<<endl <<1<<endl<<N;	
}
