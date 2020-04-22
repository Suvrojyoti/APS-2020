#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll n, i;
    cin >> n;
    ll arr[n + 1];
    vector<pair<ll, ll>> v;
    //cin>>n;
    for (i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        v.push_back({temp, i});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    // for(auto it:v)
    // {
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    i = 0;
    ll sum = 0;
    for (auto it : v)
    {
        sum += it.first * i + 1;

        arr[i] = it.second + 1;
        i++;
      //  cout<<sum<<" ";
    }
    cout << sum << endl;
    //cout<<"**********";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}