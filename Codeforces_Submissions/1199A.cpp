#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   ll n, x, y;
	cin >> n >> x >> y;
	vector<int> arr(n);
 
	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}
 
	for (ll i = 0; i < n; i++) {
 
		ll a = arr[i];
 
		bool can = true;
		for (ll j = max(i - x, 0LL); j < i; j++) {
			if (arr[j] < arr[i]) {
				can = false;
				break;
			}
		}
 
		for (ll j = min(n - 1, i + y); j > i; j--) {
			if (arr[j] < arr[i]) {
				can = false;
				break;
			}
		}
 
		if (can) {
			cout << i + 1;
			return 0;
		}
	}
}