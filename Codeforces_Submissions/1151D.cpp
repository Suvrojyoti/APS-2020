#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int maxn = 100010;
int n, p[maxn];
ll ans, a[maxn], b[maxn];
 
bool comp(int i, int j) {
    return a[i] - b[i] > a[j] - b[j];
}
 
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%lld %lld", &a[i], &b[i]), p[i] = i;
    }
    sort(p + 1, p + n + 1, comp);
    for (int i = 1; i <= n; i++) {
        ans += a[p[i]] * (i - 1) + b[p[i]] * (n - i);
    }
    printf("%lld\n", ans);
    return 0;
}