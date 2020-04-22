#include <iostream>
#define ll long long
using namespace std;
ll q,k,n,a,b;
int main()
{ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>q;
    while(q--){
        cin>>k>>n>>a>>b;
        if(k-n*b<=0){
            cout<<-1<<'\n';
            continue;
        }
        ll l=0,r=n,ans=0;
        while(l<=r){
            ll m=(l+r)/2;
            if(k-m*a-(n-m)*b>0){
                ans=m;
                l=m+1;
            }else r=m-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}