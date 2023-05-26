#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{

	int N;
	cout<<"Enter the size of Array"<<endl;
	cin>>N;
	int A[N];
	int mx=A[0],mn=A[0];
	
	cout<<"Enter the elements of Array"<<endl;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	
	for(int i=0;i<N;i++)
	{
		if(A[i]>A[i+1])
		{
			mx=A[i];
		}
	}
	cout<<"MAX "<<mx<<endl;
	
	for(int i=0;i<N;i++)
	{
		if(A[i]<A[i+1])
		{
			mn=A[i];
		}
	}
	
	cout<<"MIN "<<mn<<endl;
}
