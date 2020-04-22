#include <bits/stdc++.h>
using namespace std;
string s;
int a[100010], b[100010];
int main()
{
    cin >> s;
    a[0] = b[0] = 0;
    for (int i=0;i<s.length()-1;++i)
    if (s[i] == 'A' && s[i+1] == 'B') a[0]++, a[a[0]] = i;
    for (int i=0;i<s.length()-1;++i)
    if (s[i] == 'B' && s[i+1] == 'A') b[0]++, b[b[0]] = i;
    if (a[0] > 0 && b[0]) {
        int i=1,j=b[0];
        if (abs(a[1]-b[b[0]]) > 1 || abs(a[a[0]]-b[1]) > 1) printf("YES");
        else printf("NO");
    }
    else printf("NO");
    return 0;
}