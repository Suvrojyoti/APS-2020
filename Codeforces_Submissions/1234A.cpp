#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

ll test;
cin>>test;
while(test--)
{
    ll n,t,avg;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>t;
        sum+=t;
    }
    avg=sum/n;
    if(avg*n==sum)
        cout<<avg<<endl;
    else
    {
            cout<<avg+1<<endl;
    }
    
}
return 0;
}