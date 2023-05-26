#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],maxnum=INT_MIN,minnum=INT_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++)
	{
		maxnum=max(maxnum,arr[i]);
		minnum=min(minnum,arr[i]);
	}
	cout<<maxnum<<endl;
	cout<<minnum;
	return 0;
	
}
