#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int n,arr[200005],i,sum=0,j;
    queue <long long int> start,fin;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            arr[i]*=-1;
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
       
        while(start.front()<arr[i]&&start.size()!=0)
                start.pop();
        sum+=start.size();
        
        start.push(arr[i]*2);
    }
            
       
    cout<<sum;
    return 0;
}