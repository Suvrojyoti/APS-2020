#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;
 

ll f[300005];
int main() {

  ll n;
  cin>>n;
  map<ll,ll> ma,mb;
  map<pair<ll,ll>,ll> mp;
  f[0]=1;
  for(ll i=0;i<n;i++) {
  	ll a,b;
  	cin>>a>>b;
  	f[i+1]=(f[i]*(i+1))%mod;
  	ma[a]++;
  	mb[b]++;
  	mp[{a,b}]++;
  }
  ll an=f[n];
  ll c=1;
  for(auto it: ma) {
  	c*=f[it.second];
  	c%=mod;
  }
  an=(an+mod-c)%mod;
  c=1;
  for(auto it: mb) {
  	c*=f[it.second];
  	c%=mod;
  }
  an=(an+mod-c)%mod;
  c=1;
  bool b=1;
  ll x=0;
  for(auto it: mp) {
  	if(x>it.first.second) {
  		b=0;
  		break;
  	}
  	x=it.first.second;
  	c*=f[it.second];
  	c%=mod;
  }
  if(b)
  an=(an+c)%mod;
  cout<<an;
}