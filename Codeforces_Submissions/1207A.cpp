#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll test,b,p,c,c1,c2,sum;
    cin>>test;
    while(test--)
    {
        sum=0;
        cin>>b>>p>>c>>c1>>c2;
        ll n=b;
        if(c1<c2)
        {
            swap(p,c);
            swap(c1,c2);
        }
        if(p>=n/2)
        {
            sum+=c1*(n/2);
            cout<<sum<<endl;
            continue;
        }
        sum+=c1*p;
        n-=p*2;
        sum+=c2*min(n/2,c);
        cout<<sum;
        cout<<endl;
    }
    return 0;
}