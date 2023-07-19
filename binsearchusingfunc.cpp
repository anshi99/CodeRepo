#include<bits/stdc++.h>
using namespace std;

int binsearch(int n,int A[],int num)
{
	int s,e,mid;
	s=0;
	e=n-1;
	cout<<"The location of "<<num<<" is\n";
	while(s<=e)
	{
		mid=(s+e)/2;
		if(num==A[mid])
		{
			return mid;
			break;
		}
		else if(num<A[mid])
		e=mid-1;
		else if(num>A[mid])
		s=mid+1;
	}	
	return -1;
}

int main()
{
	int n,num;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int A[n];
	cout<<"Enter the elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the element you want to search\n";
	cin>>num;
	cout<<binsearch(n,A,num);
}
