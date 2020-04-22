#include<bits/stdc++.h>
using namespace std;
 
int main() {
	long long k;
	cin >> k;
	long long cur = 9;
	for (int i = 1; k; i++, cur *= 10) {
		k -= i * cur;
		if (k > 0)
			continue;
		k += i * cur - 1, cur = cur / 9 + k / i;
		for (int j = i - 1; j > k % i; j--)
			cur /= 10;
		return cout << cur % 10, 0;
	}
}