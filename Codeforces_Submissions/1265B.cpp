#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
string s;
char find_this(ll i)
{
    char f[3]={'a','b','c'};
    for(ll j=0;j<3;j++)
    {
        if(f[j]!=s[i-1]&&f[j]!=s[i+1])
            return f[j];
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test,n,arr[200005],i,j,l,r,mx=-1;
    cin>>test;
    while(test--)
    {
        cin>>n;
        mx=-1;
        ll pos;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
                pos=i;
        }
        if(n==1)
        {
            cout<<"1\n";
            continue;
        }
        l=r=pos;
        i=1;
        ll t;
        cout<<"1";
        while(i<n-1)
        {
            if(l>0&&r<n-1)
            {
                t=min(arr[l-1],arr[r+1]);
                if(t==arr[l-1])
                    l--;
                else
                {
                    r++;
                }
                
            }
            else if(l>0)
            {
                t=arr[l-1];
                l--;
            }
            else
            {
                t=arr[r+1];
                r++;
            }
            mx = max(t, mx);
          //  cout<<endl<<i<<" "<<t<<" "<<mx<<endl;
            if (mx == i+1)
                cout << "1";
            else
            {
                cout<<"0";
            }
            i++;
            
        }
        cout<<"1\n";
        
    }
    return 0;
}