#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll countDivisors(ll n) 
{ 
    ll cnt = 0; 
    for (ll i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 



int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
	ll n,a,i;
	cin>>n;
	ll arr[n+5];
	for(i=0;i<n;i++)
		cin>>arr[i];
	ll g =arr[0];
	for(i=1;i<n;i++)
		g=__gcd(g,arr[i]);
	cout<<countDivisors(g);
	return 0;
}