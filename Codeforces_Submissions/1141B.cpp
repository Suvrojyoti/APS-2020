#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli n,i,cnt=0,t;
    lli arr[500000];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    lli j=n;
    for(i=0;i<n;i++)
    {
        arr[j]=arr[i];
        j++;
    }
    /*for(i=0;i<2*n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";*/
    for(i=1;i<2*n;i++)
    {
        if(arr[i]==1)
            arr[i]=arr[i]+arr[i-1];
    }
    lli* i1; 
    i1 = max_element(arr,arr + 2*n);
   /* for(i=0;i<2*n;i++)
        cout<<arr[i]<<" ";*/
    cout<<*i1;
    return 0;
}