#include<bits/stdc++.h> 
using namespace std;
int main() {
    long long int n,i,arr[1000],sum=0,sum1,k,j,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%360==0)
        cout<<"YES";
    else
    {
    k=pow(2,n);
    for(i=0;i<k;i++)
    {
        sum=sum1=0;
        for(j=0;j<n;j++)
        {
            if(i&(1<<j))
                sum=(sum+arr[j])%360;
            else
                sum1=(sum1+arr[j])%360;
                
        }
        if(sum==sum1)
        {
            cout<<"YES";
            flag=1;
            break;
        }
        
        
    }
    if(flag==0)
            cout<<"NO";
    }
	return 0;
}