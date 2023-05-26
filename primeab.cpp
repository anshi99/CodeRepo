#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		cout<<i<<endl;
	}
}
