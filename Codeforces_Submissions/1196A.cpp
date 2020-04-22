#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
	ll test,a,b,c;
	cin>>test;
	while(test--)
	{
		cin>>a>>b>>c;
		cout<<(a+b+c)/2<<endl;
	}
	return 0;
}