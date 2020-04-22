#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif

    ll n,arr[300005],a[3]={0},i,j,t;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
    	if(s[i]=='0')
    	{
    		arr[i]=0;
    		a[0]++;
    	}
    	else if(s[i]=='1')
    	{
    		arr[i]=1;
    		a[1]++;
    	}
    	else
    	{
    		arr[i]=2;
    		a[2]++;
    	}
    }

    	t=4;
    	while(t--)
    	{
    		
    			i=0;
    			while(i<n)
    			{
    			if(a[0]<n/3&&a[2]>n/3&&arr[i]==2&&i<n)
    			{
    				a[0]++;
    				a[2]--;
    				arr[i]=0;
    				
    			}
    			i++;
    			}
    			i=0;
    			while(i<n)
    			{
    			if(a[0]<n/3&&a[1]>n/3&&arr[i]==1&&i<n)
    			{
    				a[0]++;
    				a[1]--;
    				arr[i]=0;
    				
    			}
    			i++;
    			}
    			i=0;
    			while(i<n)
    			{
    			if(a[1]<n/3&&a[2]>n/3&&arr[i]==2&&i<n)
    			{
    				a[1]++;
    				a[2]--;
    				arr[i]=1;
    				
    			}
    			i++;
    			}
    			
    			i=n-1;
    			while(i>=0)
    			{
    			if(a[2]<n/3&&a[1]>n/3&&arr[i]==1&&i>=0)
    			{
    				a[2]++;
    				a[1]--;
    				arr[i]=2;
    				
    			}
    			i--;
    			}
    			i=n-1;
    			while(i>=0)
    			{
    			if(a[2]<n/3&&a[0]>n/3&&arr[i]==0&&i>=0)
    			{
    				a[2]++;
    				a[0]--;
    				arr[i]=2;
    				
    			}
    			i--;
    			}
    			i=n-1;
    			while(i>=0)
    			{
    			if(a[1]<n/3&&a[0]>n/3&&arr[i]==0&&i>=0)
    			{
    				a[1]++;
    				a[0]--;
    				arr[i]=1;
    				
    			}
    			i--;
    			}
    		
    	}
    	for(i=0;i<n;i++)
    		cout<<arr[i];

 }