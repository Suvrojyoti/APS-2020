#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,m,test,o,e,o1,e1;
cin>>test;
while (test--)
{
    cin >> n ;
    o=o1=e=e1=0;
    ll test;
     for (ll i = 0; i < n; i++)
    {
        cin>>test;
        if(test%2)
            o++;
        else
        {
            e++;
        }
        
    }
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin >> test;
        if (test % 2)
            o1++;
        else
        {
            e1++;
        }
    }
    cout<<o1*o+e1*e<<endl;
  
}
return 0;
}