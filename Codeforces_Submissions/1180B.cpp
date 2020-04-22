#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define LL long long
#define st first
#define nd second
#define endl '\n'
using namespace std;

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		if(a[i] >= 0)
			a[i] = -a[i] - 1;
	}
	if(n % 2 == 1) {
		int mn = -1, mxi;
		for(int i = 0; i < n; ++i)
			if(mn > a[i]) {
				mn = a[i];
				mxi = i;
			}
		if(mn == -1) 
			a[0] = 0;
		else a[mxi] = -a[mxi] - 1;
	}
	for(int i = 0; i < n; ++i)
		cout << a[i] << " ";

}