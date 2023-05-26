#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cout<<"Enter the number of elements in array\n";
	cin>>N;
	int A[N],B[N];
	cout<<"Enter elements in array\n";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	
	for(int i=N-1,j =0 ; i>0,j<N ; i--,j++) 
	{
		B[j]=A[i];
	}
	cout<<"The reversed array is\n";
	for(int i=0;i<N;i++)
	{
		cout<<B[i]<<"\n";
	}
}
