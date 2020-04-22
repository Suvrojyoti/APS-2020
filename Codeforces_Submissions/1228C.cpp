#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

vector <unsigned ll> v;

unsigned ll power(unsigned ll x, unsigned ll y, unsigned ll p)
{
    unsigned ll res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

void primeFactors(ll n)
{
    for(ll i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
 
            while(n%i == 0)
            {
                n /= i;
            }
        }
    }
    if(n > 1)
    {
        v.push_back(n);
    }
}


ll get_exponent(ll n, ll p)
{
    ll exponent = 0;
    ll temp_p = p;
 
    while(n > 0)
    {
        exponent += n/p;
 
        n /= p;
    }
 
    return exponent;
}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
unsigned ll x,i;
unsigned ll y;
cin>>x>>y;
// cout<<y<<" ";
primeFactors(x);
unsigned ll prev=0;
unsigned ll sum=1;
// cout<<v.size();
for(auto it:v)
{
    // cout<<it<<" ";
    // cout<<y<<" "<<it<<endl;
    unsigned ll sh=get_exponent(y,it);
    //  cout<<sh<<" ";
    sum=(sum*power(it,sh,1000000007))%1000000007;
    // prev=0;
    // while(sh)
    // {
    //     unsigned ll d = power(it, sh,1000000007);
    //     unsigned ll t=y/d -prev;
    //     prev = y / d;
        
    //     sh--;
    // }
    
}
cout<<sum%1000000007;
return 0;
}