#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif

    string s,s1;
    ll n,i,sum;
    cin>>s;
    n=s.size();
    ll v=0;
    ll k=0;
    for(i=0;i<n;i++)
    {
    	if(s[i]=='v')
    		v++;
    	else
    	{
    		v=0;
    		s1+=s[i];
    		k++;
    	}
    	if(v>=2)
    	{
    		s1+='w';
    		k++;
    	}

    }
   /* for(i=0;i<k;i++)
    	cout<<s1[i];*/
    ll arr[3]={0};
    for(i=0;i<k;i++)
    {
    	if(s1[i]=='w')
    	{
    		arr[0]++;
    		arr[2]+=arr[1];
    	}
    	else
    	{
    		arr[1]+=arr[0];
    	}
    }
    cout<<arr[2];
    return 0;
}