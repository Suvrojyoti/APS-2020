#include <bits/stdc++.h>
using namespace std;
int main()
{
    char l[105],arr[2][105];
    int i,c=0,k=0;
    cin>>l;
    arr[0][0]='X';
    arr[1][0]='X';
    for(i=0;l[i]!='\0';i++)
    {
        arr[0][i+1]=l[i];
        k++;
    }
    arr[0][k+1]='X';
    arr[1][k+1]='X';
    cin>>l;
    for(i=1;i<=k;i++)
    {
        arr[1][i]=l[i-1];
    }
    for(i=1;i<=k;i++)
    {
        if(arr[0][i]=='0'&&arr[1][i]=='0'&&arr[1][i+1]=='0')
        {
            arr[0][i]='X';
            arr[1][i]='X';
            arr[1][i+1]='X';
            c++;
            //cout<<i;
        }
        else if(arr[0][i]=='0'&&arr[1][i]=='0'&&arr[1][i-1]=='0')
        {
            arr[0][i]='X';
            arr[1][i]='X';
            arr[1][i-1]='X';
            c++;
            //cout<<i;
        }
        else if(arr[0][i]=='0'&&arr[0][i+1]=='0'&&arr[1][i]=='0')
        {
            c++;
            arr[0][i]='X';
            arr[1][i+1]='X';
            arr[1][i]='X';
            //cout<<i;
        }
        else if(arr[0][i]=='0'&&arr[0][i+1]=='0'&&arr[1][i+1]=='0')
        {
            arr[0][i]='X';
            c++;
            arr[1][i+1]='X';
            arr[0][i+1]='X';
            //cout<<i;
        }
       // cout<<" ";
        
        
    }
    /*for(i=1;i<=k;i++)
    {
        cout<<arr[0][i];
    }
    cout<<"\n";
    for(i=1;i<=k;i++)
    {
        cout<<arr[1][i];
    }*/
    cout<<c;
    return 0;
}