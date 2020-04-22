#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test,n,q,i;
    cin>>test;
    while (test--)
    {
        cin>>n;
        if(n<4)
            cout<<4-n<<endl;
        else
        {
            cout<<n%2<<endl;
        }
        
    }
    return 0;
}