#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum,mx,arr[200],p[4]={0,2,19,6},j;
    char c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        arr[i]=c-'A';
      //  cout<<arr[i]<<" ";
    }
    //cout<<endl;
    mx=99999999999999;
    for(i=0;i<n-3;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
        if(arr[i+j]>p[j])
        {
            sum+=min((arr[i+j]-p[j]),(26-arr[i+j]+p[j]));
        }
        else
        {
            sum+=min((p[j]-arr[i+j]),(26-p[j]+arr[i+j]));
        }
        //cout<<sum<<" ";
        }
        mx=min(mx,sum);
    }
    cout<<mx;
}