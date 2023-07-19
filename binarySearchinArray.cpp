#include<iostream>
using namespace std;

int main()
{
	int n,s,e,mid,num;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int A[n];
	cout<<"Enter the elements in array\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	s=0;
	e=n-1;
	cout<<"Enter the element you want to search\n";
	cin>>num;
	cout<<"The location of "<<num<<" is\n";
	while(s<=e)
	{
		mid=(s+e)/2;
		if(num==A[mid])
		{
		cout<<mid;
		break;
		}
		else if(num<A[mid])
		e=mid-1;
		else if(num>A[mid])
		s=mid+1;
	}
}
