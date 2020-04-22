#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
	int n,l,r;
	scanf("%lld %lld %lld",&n,&l,&r);
	printf("%lld %lld\n",n-l+(1<<l)-1,(1<<(r-1))*(n-r+2)-1);
	return 0;
}