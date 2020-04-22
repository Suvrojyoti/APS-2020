#define NDEBUG

#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

#ifdef NDEBUG
#  define debug(...)
#else
#  include "debug.hh"
#endif

const int M = 1e5, L = 1e5;
int m, ns;
int64_t na;
int32_t a[L];

struct stage {
  bool type;
  union {
    int32_t x;
    struct {
      int32_t l;
      int16_t c;
    };
  };
} s[M];

void fill_prefix(int i) {
  for (int j = 0; j < s[i].c; j++) {
    for (int k = 0; k < s[i].l; k++) {
      if (na == L) return;
      a[na++] = a[k];
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false), cin.tie(0), cout << fixed;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int t;
    cin >> t;
    s[i].type = t - 1;
    if (t == 1) {
      cin >> s[i].x;
      if (na < L) a[na++] = s[i].x;
    } else {
      cin >> s[i].l >> s[i].c;
      fill_prefix(i);
    }
  }
  int n;
  int64_t i;
  cin >> n;
  na = 0;
  while (n-- > 0) {
    cin >> i;
    i--;
    for (;;) {
      int64_t na2 = na + (s[ns].type ? s[ns].l * s[ns].c : 1);
      if (na2 > i) break;
      na = na2, ns++;
    }
    if (i < L) {
      cout << a[i];
    } else {
      if (s[ns].type) {
        cout << a[(i - na) % s[ns].l];
      } else {
        cout << s[ns].x;
      }
    }
    cout << (n == 0 ? '\n' : ' ');
  }
  return 0;
}