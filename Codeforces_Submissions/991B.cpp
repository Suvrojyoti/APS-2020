#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[500],tot=0,i;
    float avg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        tot+=arr[i];
    }
    sort(arr,arr+n);
    avg=tot*1.0/n;
    if(avg>=4.5)
        cout<<"0";
    else
    {
        i=0;
        while(avg<4.5)
        {
            tot+=5-arr[i];
            avg=tot*1.0/n;
            i++;
        }
        cout<<i;
    }
    return 0;
}