#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    ll test,a,b,x,y,f=-9999999999,l=-9999999999;
    char c;
    cin>>test;
    while(test--)
    {
        cin>>c>>a>>b;
        if(a>b)
            swap(a,b);
        if(c=='+')
        {
            f=max(a,f);
            l=max(b,l);
        }
        else
        {
            if(a>=f&&b>=l)
                cout<<"YES";
            else
                cout<<"NO";
            cout<<endl;
        }
    }
    return 0;
}