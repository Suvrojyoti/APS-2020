#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 105;
 
long long a[N];
 
int main()
{
	long long n, k;
	scanf("%lld %lld", &n, &k);
	for (int i = 0; i <= 35; ++i) {
		a[i] = ((n >> i) & 1);
	}
	int count = 0;
	for (int i = 0; i <= 35; ++i) {
		count += a[i];
	}
	if (count > k || k > n) {
		printf("NO");
	}
	else {
		printf("YES\n");
		k -= count;
		for (int i = 35; i >= 1; --i) {
			if (a[i] < k) {
				k -= a[i];
				a[i-1] += 2*a[i];
				a[i] = 0;
			}
			else {
				a[i-1] += 2*k;
				a[i] -= k;
				k = 0;
				break;
			}
		}
		for (int i = 0; i <= 35; ++i) {
			for (int j = 1; j <= a[i]; ++j) {
				printf("%lld ", (1LL << i));
			}
		}
	}
	return 0;
}