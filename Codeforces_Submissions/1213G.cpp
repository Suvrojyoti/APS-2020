#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
ll dsu[200008], size[200008], res;
struct str
{
    ll a, b, w;
};
ll find_parent(ll a)
{
    while (a != dsu[a])
    {
        dsu[a] = dsu[dsu[a]];
        a = dsu[a];
    }
    return a;
}
void mrg(ll u, ll v)
{
    ll a = find_parent(u);
    ll b = find_parent(v);
    if (a == b)
        return;
    if (size[a] > size[b])
    {
        res += size[a] * size[b];
        size[a] += size[b];
        dsu[b] = dsu[a];
    }
    else
    {
        res += size[b] * size[a];
        size[b] += size[a];
        dsu[a] = dsu[b];
    }
}
bool acompare(str lhs, str rhs) { return lhs.w < rhs.w; }
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, m, a, b, w, i;
    cin >> n >> m;
    str s[200008];
    for (i = 0; i <= n+5; i++)
    {
        dsu[i] = i;
        size[i] = 1;
    }
    for (i = 0; i < n - 1; i++)
    {
        cin >> a >> b >> w;
        s[i].a = a;
        s[i].b = b;
        s[i].w = w;
    }
    sort(s, s + n-1, acompare);
    /* for (i = 0; i < n - 1; i++)
    {
        cout << s[i].a << " " << s[i].b << " " << s[i].w << endl;
    }*/
    vector<pair<ll, ll>> v;
    ll apk[200008];
    for (i = 0; i < m; i++)
    {
        ll u;
        cin >> u;
        v.push_back({u, i});
    }
    sort(v.begin(), v.end());
    //  for(auto it:v)
    //    cout<<it.first<<" "<<it.second<<endl;
    ll t = 0;
    for (i = 0; i < m; i++)
    {
        while (t < n - 1 && s[t].w <= v[i].first)
        {
            mrg(s[t].a, s[t].b);
            t++;

            //  cout << res << endl;
        }
        //   cout<<v[i].second<<endl;
        //  cout<<endl;

        apk[v[i].second] = res;
    }
    for (i = 0; i < m; i++)
        cout << apk[i] << " ";
    return 0;
}