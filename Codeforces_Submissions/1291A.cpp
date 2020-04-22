#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
using namespace std;

const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a,ll b)
{
    if(a%b==0)
        return a/b;
    return a/b +1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,i,j;
string s;
cin>>test;
while(test--)
{
    cin>>n;
    cin>>s;
    string s1;
    for(i=0;i<n;i++)
    {
        if(s1.length()==2)
            break;
        if((s[i]-'0')%2)
            s1+=s[i];
    }
    if(s1.length()==2)
        cout<<s1<<endl;
    else
    {
        cout<<"-1\n";
    }
    
}
return 0;
}