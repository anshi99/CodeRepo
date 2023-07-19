#include<bits/stdc++.h>
using namespace std;
//insertion in array
int main()
{
	int N,loc;
	cout<<"Enter the number of elements \n";
	cin>>N;
	int A[N];
	cout<<"Enter the elements\n";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the location at which the element is to be deleted\n";
	cin>>loc;
	for(int i=loc;i<=N;i++)
	{
		A[i]=A[i+1];
	}
	N=N-1;
	cout<<"The new array is\n";
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<endl;
	}
}
