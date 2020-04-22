#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,test,i;
    string a,b;
    cin>>test;
    while(test--)
    {
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(i=0;i<b.size();i++)
            if(b[i]=='1')
                break;
        ll t=0;
        for(;i<a.size();i++)
        {
            if(a[i]=='1')
                break;
            t++;
        }
        cout<<t<<endl;
    }
}