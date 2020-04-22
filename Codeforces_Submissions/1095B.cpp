#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long int arr[100000],n,mn,mx,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(n==2)
        cout<<"0";
    else
    {
        if(arr[n-2]-arr[0]>arr[n-1]-arr[1])
            cout<<arr[n-1]-arr[1];
        else
            cout<<arr[n-2]-arr[0];
    }
    return 0;
}