#include<iostream>
using namespace std;

int main()
{
int T;
cin>>T;
while(T--)
{
	int X,a;
	cin>>X;
	while(X%10!=0)
	{
		X=X*2;
		a++;
	}
	cout<<a<<endl;
}
return 0;
}
