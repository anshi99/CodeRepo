#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
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
		for(int j=0;j<n-i;j++)
		{
			if(A[j]>A[j+1])
			{
				t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
		}
	}
	cout<<"The Sorted Array is \n";
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}
