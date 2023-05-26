#include<iostream>
using namespace std;

int main()
{
	int n,j,c;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<endl;
	}
}
