#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll i,q,l,r,d,t;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>d;
        if(d<l)
            cout<<d;
        else if(l<=d<=r)
        {
            if((r+1)%d==0)
            cout<<r+1;
            else
            {
                t=(r+1)/d;
                cout<<d*(t+1);
            }
        }
        else if(d>l)
            cout<<d;
    cout<<endl;
    }

    return 0;
}