#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j,flag=0,i1,j1,k;
    char arr[505][505];
    cin>>n>>m;
    if(n<3||m<3)
        cout<<"NO";
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cin>>arr[i][j];
        }
        for(i=1;i<n-1;i++)
        {
            for(j=1;j<m-1;j++)
            {
                if(arr[i][j]=='*'&&arr[i-1][j]=='*'&&arr[i+1][j]=='*'&&arr[i][j+1]=='*'&&arr[i][j-1]=='*')
                {
                    for(k=i;k>=0;k--)
                    {
                        if(arr[k][j]=='.')
                            break;
                        arr[k][j]='.';
                    }
                    arr[i][j]='*';
                    for(k=i;k<n;k++)
                    {
                        if(arr[k][j]=='.')
                            break;
                        arr[k][j]='.';
                    }
                    arr[i][j]='*';
                    for(k=j;k<m;k++)
                    {
                        if(arr[i][k]=='.')
                            break;
                        arr[i][k]='.';
                    }
                    arr[i][j]='*';
                    for(k=j;k>=0;k--)
                    {
                        if(arr[i][k]=='.')
                            break;
                        arr[i][k]='.';
                    }
                    for(i1=0;i1<n;i1++)
                    {
                        for(j1=0;j1<m;j1++)
                        {
                            //cout<<arr[i1][j1];
                            if(arr[i1][j1]=='*')
                            {
                                cout<<"NO";
                                exit(0);
                            }
                        }
                        //cout<<"\n";
                    }
                    cout<<"YES";
                    exit(0);
                    
                }
            }
        }
        cout<<"NO";
    }
    return 0;
}