#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N,O;
    cin>>M>>N>>O;
    int A[M][N],B[N][O];
    int C[M][O];
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>A[i][j];
        }
    }

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }


    for(int i=0;i<N;i++)
    {
        for(int j=0;j<O;j++)
        {
            cin>>B[i][j];
        }
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<O;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<O;j++)
        {
            C[i][j]=0;
        }
    }


    for(int i=0;i<M;i++)
    {
        for(int j=0;j<O;j++)
        {
            for(int k=0;k<N;k++)
            {
                C[i][j]+= A[i][k] * B[k][j]; 
            }
        }
    }

     for(int i=0;i<M;i++)
    {
        for(int j=0;j<O;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<"\n";
    }
}
