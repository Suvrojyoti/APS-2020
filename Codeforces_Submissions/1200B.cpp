#include <bits/stdc++.h>
using namespace std;
 
int n, m, k, h[100];
 
void solve() {
	cin >> n >> m >> k;
	for(int i=0; i<n; ++i)
		cin >> h[i];
	for(int i=0; i+1<n; ++i) {
		if(h[i]<h[i+1]-k) {
			m-=h[i+1]-k-h[i];
			if(m<0) {
				cout << "NO\n";
				return;
			}
		} else {
			m+=h[i]-max(h[i+1]-k, 0);
		}
	}
	cout << "YES\n";
}
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}