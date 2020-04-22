#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   ll n,z,k;
   string s;
   cin>>k;
   cin>>s;
   n=count(s.begin(),s.end(),'n');
   z = count(s.begin(), s.end(), 'z');
   for(ll i=0;i<n;i++)
    cout<<"1 ";
   for (ll i = 0; i < z; i++)
       cout << "0 ";
    return 0;
}