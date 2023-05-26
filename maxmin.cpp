#include<bits/stdc++.h>
using namespace std;

int main()
{
	int minNum=INT_MAX, maxNum=INT_MIN;
	int N;
	cout<<"Enter the number of elements in array\n";
	cin>>N;
	int A[N];
	cout<<"Enter elements in array\n";
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
	}
	for(int i=0;i<N;i++)
	{
		minNum = min(minNum,A[i]);
		maxNum = max(maxNum,A[i]);
	}
	cout<<"Minimum element in array\n"<<minNum<<endl;
	cout<<"Maximum element in array\n"<<maxNum;
}
