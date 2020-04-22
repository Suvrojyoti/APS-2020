#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100005]={0},i,cnt,j;
    cnt=1;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(j=1;j*i<=n;j++)
            {
                if(!arr[j*i])
                arr[j*i]=cnt;
            }
                
                
            cnt++;
        }
    }
    for(i=2;i<=n;i++)
    {
        if(!arr[i])
        {
            cout<<cnt<<" ";
            cnt++;
        }
        else
        cout<<arr[i]<<" ";
    }
        
    return 0;
}