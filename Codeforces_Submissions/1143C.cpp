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
	ll n,arr[100005]={0},l,r,c[100005]={0},t[100005]={0},c1[100005]={0},i,t1,t2;
	vector <ll> v;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>t1>>t2;
		if(t1==-1)
			t1=0;
		t[i]=t2;
		arr[i]=t1;
		c[t1]++;
		if(t2==1)
		{
			c1[t1]++;
			v.push_back(i);
		}
		sort(v.begin(),v.end());
	}
	bool flag=0;
	for(auto it=v.begin();it!=v.end();it++)
	{
		if(c1[*it]==c[*it])
		{
			cout<<*it<<" ";
			flag=1;
		}
	}
	if(!flag)
		cout<<"-1";
	return 0;
}