#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
	
	long long int test,a,b,c,sum,i;
	cin>>a>>b>>c;
	if(a==b)
		cout<<(a+b) + 2*c;
	else
	cout<<2*min(a,b)+1+c*2;

	return 0;
}