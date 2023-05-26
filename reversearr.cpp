#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }

    for(int i=N-1,j=0;i>0,j<N;i--,j++)
    {
        B[j]=A[i];
    }

    cout<<endl;

    for(int i=0;i<N;i++)
    {
        cout<<B[i]<<" ";
    }
}