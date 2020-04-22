#include <bits/stdc++.h>
using namespace std;

long long int nCr(long long int n)
{
    return (n*(n-1))/2;
}

int main()
{
    long long int arr[28]={0},n,i,sum=0;
    cin>>n;
    string s;
    
    for(i=0;i<n;i++)
    {
        cin>>s;
        arr[s[0]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        
        sum+=nCr(arr[i]/2)+nCr(arr[i]-arr[i]/2);
        //cout<<arr[i]<<" "<<sum<<"\n";
    }
        
    cout<<sum;
    return 0;
}