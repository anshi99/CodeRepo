#include<bits/stdc++.h>
using namespace std;
//insertion in array
int main()
{
	int N;
	int loc,el;
	cout<<"Enter the number of elements \n";
	cin>>N;
	int A[N];
	cout<<"Enter the elements\n";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter location\n";
	cin>>loc;
	
	for(int i=N;i>=loc;i--)
	{
		A[i+1]=A[i];
	}
	cout<<"Enter element which is to be inserted\n";
	cin>>el;
	A[loc]=el;
	N=N+1;	
	cout<<"New array is \n";
	for(int i=0;i<N;i++)
	{
		cout<<A[i]<<endl;
	}
}
