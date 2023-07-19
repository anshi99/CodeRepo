#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int A[n];
	cout<<"Enter the elements in array\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[i])
			{
				A[i]=A[i]+A[j];
				A[j]=A[i]-A[j];
				A[i]=A[i]-A[j];
			}
		}
	}
	cout<<"The Sorted Array is \n";
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}
