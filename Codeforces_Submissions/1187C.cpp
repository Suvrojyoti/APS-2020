#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
 
	#ifndef ONLINE_JUDGE
	#include <fileio.h>
	#endif
 
	int n, m; cin >> n >> m;
	vector<pair<int, int>> not_sorted;
	vector<int> arr(n + 1, -1);
	while (m--) {
		int t, l, r; cin >> t >> l >> r;
		if (t == 1) {
			for (int i = l + 1; i <= r; ++i) {
				arr[i] = 0;
			}
		} else {
			not_sorted.push_back({l, r});
		}
	}
	arr[0] = 100000;
	for (int i = 1; i <= n; ++i) {
		arr[i] += arr[i - 1];
	}
	for (auto range : not_sorted) {
		if (is_sorted(arr.begin() + range.first, arr.begin() + range.second + 1)) {
			return cout << "NO" << endl, 0;
		}
	}
	cout << "YES" << endl;
	for (int i = 1; i <= n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}