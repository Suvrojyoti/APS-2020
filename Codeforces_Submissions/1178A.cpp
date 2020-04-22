#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif

    ll n,a,sum,b,i,sum1;
    cin>>n;
    cin>>a;
    sum1=sum=a;
    vector<ll> v;
    for(i=1;i<n;i++)
    {
    	cin>>b;
    	sum1+=b;
    	if(a>=2*b)
    	{
    		sum+=b;
    		v.push_back(i);
    	}

    }
    if(sum*2>sum1)
    {
    	cout<<v.size()+1<<endl<<"1 ";
    	for(auto it:v)
    		cout<<it+1<<" ";
    }
    else
    	cout<<"0";
    return 0;
}