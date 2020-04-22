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
    ll n,i,j,k,m1=0,m2=0,w,b;
    cin>>n;
    char arr[200];
    for(i=0;i<n;i++)
        cin>>arr[i];
    vector <ll> v;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]=='B')
        {
            v.pb(i);
            arr[i]='W';
            if(arr[i+1]=='B')
                arr[i+1]='W';
            else
            {
                arr[i+1]='B';
            }
            
        }
    }
    // for (auto it : v)
    //     cout << it + 1 << " ";
    // cout<<endl;
    if(arr[n-1]=='B')
    {
        if(n%2)
        {
            for(i=1;i<n;i+=2)
            {
                v.pb(i-1);
                // cout<<"*"<<i<<" ";
            }
        }
        else        
        {
            cout<<"-1"<<endl;
            exit(0);
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v)
        cout<<it+1<<" ";
        
    return 0;
}