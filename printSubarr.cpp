#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<A[k]<<" ";
            }
            cout<<endl;
        }
    }
}