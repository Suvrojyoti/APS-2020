#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const ll mod = 1e9 + 7;
 
ll oddsum(ll l, ll r) {
	l--;
	l %= mod;
	r %= mod;
	ll ret = r * r;
	ret %= mod;
	ret -= l * l;
	ret %= mod;
	ret += mod;
	ret %= mod;
	return ret;
}
 
ll evensum(ll l, ll r) {
	ll ret = 0;
	l %= mod;
	r %= mod;
	ret = r * (r + 1) - l * (l - 1);
	ret %= mod;
	ret += mod;
	ret %= mod;
	return ret;
}
 
ll f(ll n) {
	ll ret = 0;
	ll len = 1;
	ll took = 0;
	ll t[2] = {0, 0};
	int tog = 0;
	while(took < n) {
		if(!tog) {
			ret += oddsum(t[tog] + 1, t[tog] + min(len, n - took));
			ret %= mod;
			t[tog] = min(t[tog] + len, n);
			took += len;
		} else {
			ret += evensum(t[tog] + 1, t[tog] + min(len, n - took));
			ret %= mod;
			t[tog] = min(t[tog] + len, n);
			took += len;
		}
		tog ^= 1;
		len <<= 1;
	} return ret;
}
 
int main(int argc, char const *argv[])
{
	// freopen("in", "r", stdin);
	ll l, r;
	cin >> l >> r;
	cout << (f(r) - f(l - 1) + mod) % mod << endl;
	return 0;
}