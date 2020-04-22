#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
    ll n,i,sum,l,a,b;
    vector <ll> v[100005];
    cin>>n;
    for(i=1;i<n;i++)
    {
    	cin>>a>>b;
    	v[a].push_back(b);
    	v[b].push_back(a);
    }
	if(n==2)
		cout<<"YES";
	else if(n==3)
		cout<<"NO";
	else
	{
		for(i=1;i<=n;i++)
		{
			if(v[i].size()==2)
			{
				cout<<"NO";
				exit(0);
			}
		}
		cout<<"YES";
	}


	
	
	return 0;
}