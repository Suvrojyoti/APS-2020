#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n,i;
    cin>>n;
    if(n==1)
    {
        cout<<"YES"<<endl<<"1 2";
        exit(0);
    }
    if(n%2==0)
    {
        cout<<"NO";
        exit(0);
    }


    ll t=1;
    ll x=1;
    vector <ll> v;
     cout<<"YES\n";
    for(i=1;i<=2*n;i++)
    {
        cout<<t<<" ";


        if(x==1)
        {
           t=t+3;
        }


        else
        {
           t=t+1;
        }
        if(t>2*n)
            t=t-2*n;



       x=x^1;
    }


    return 0;
}