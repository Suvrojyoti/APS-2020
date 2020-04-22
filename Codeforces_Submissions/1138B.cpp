#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
	#endif
    ll n;
    cin>>n;
    ll a[n],c[n];
    for(ll i=0;i<n;i++)
    {
        char cc;
        cin>>cc;
        c[i]=cc-'0';
    }
    for(ll i=0;i<n;i++)
    {
        char cc;
        cin>>cc;
        a[i]=cc-'0';
    }
    ll clo=0,acro=0;
    ll both=0;
    ll none=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==1 && c[i]==0)
        {
            acro++;
        }
        else if(a[i]==0 && c[i]==1)
        {
            clo++;
        }
        else if(a[i]==1 && c[i]==1)
        {
            both++;
        }
        else
        {
            none++;
        }        
    }
    ll flag=0;
    for(ll i=0;i<=clo+both;i++)
    {
        for(ll x=0;x<=clo;x++)
        {
            ll y=acro+both-2*i+x;
            ll z=(i-x);
            ll w=n/2-(i+y);
 
            if(y<0 || y>acro || z<0 || z> both || w<0 || w>none)
            {
                continue;
            }
            flag=1;
            ll xx=x;
            for(ll i=0;i<n && xx>0 ;i++)
            {
                if(c[i]==1 && a[i]==0)
                {
                    cout<<i+1<<" ";
                    xx--;
                }
            }           
            for(ll i=0;i<n&& y>0;i++)
            {
                if(c[i]==0 && a[i]==1)
                {
                    cout<<i+1<<" ";
                    y--;
                }
            } 
            for(ll i=0;i<n&& z>0;i++)
            {
                if(c[i]==1 && a[i]==1)
                {
                    cout<<i+1<<" ";
                    z--;
                }
            }
            for(ll i=0;i<n && w>0;i++)
            {
                if(c[i]==0 && a[i]==0)
                {
                    cout<<i+1<<" ";
                    w--;
                }
            }
            return 0;
        }
    }
    cout<<"-1";
 
}