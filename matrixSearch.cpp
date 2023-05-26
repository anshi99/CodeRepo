#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N;
    cin>>M>>N;
    bool flag=false;
    int A[M][N];
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

    int tag;
    cin>>tag;
    int r=0, c= N-1;
    while(r<M && c>=0)
    { 
            if(A[r][c]==tag)
            flag= true;
            else if(A[r][c]>tag)
            c--;
            else
            r++;
    }
    if(flag)
    cout<<"element found";
    else
    cout<<"not found";

    return 0;
}