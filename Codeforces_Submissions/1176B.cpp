#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
    int tt; cin >> tt;
    // Div 3 chutiyon ke liye hota hai
    while(tt --) {
      ll n; cin >> n;
      vector <ll> ar(n);
      map <ll, ll> m;
      for(int i = 0; i < n; i++)
      {
          cin >> ar[i];
          m[ar[i] % 3]++;
      }
      ll ans = 0;
      ans += min(m[1], m[2]);
      m[1] -= ans; m[2] -= ans;
      ans += (m[2] / 3 + m[1] / 3 + m[0]);
      cout << ans << endl;
    }
}