#include<iostream>
using namespace std;

int main()
{
	int N,num,i;
	cout<<"Enter the number of elements in array\n";
	cin>>N;
	int A[N];
	cout<<"Enter the elements in array\n";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the element which is to be searched\n";
	cin>>num;
	for(i=0;i<N;i++)
	{
		if(num==A[i])
		{
			cout<<"The location of the element is\n"<<i;
			break;
		}
	}
	if(i==N)
	cout<<"Element not found";
}
