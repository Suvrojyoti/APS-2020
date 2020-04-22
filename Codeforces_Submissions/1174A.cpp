#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100000],i;
    set<long int> s;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    if(s.size()<2)
        cout<<"-1";
    else
    {
        sort(arr,arr+2*n);
        for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
        for(i=n;i<2*n;i++)
            cout<<arr[i]<<" ";
        
    }
    return 0;
}