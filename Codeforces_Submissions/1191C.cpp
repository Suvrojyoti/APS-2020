#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define rep(n) for(ll i=0;i<(n);i++)
#define jrep(n) for(ll j=0;j<(n);j++)
#define all(a) (a).begin(), (a).end()
#define dpp(a) cout<<(a).first<<" "<<(a).second<<endl;
#define append push_back
#define mod 1000000007
ll pw(ll a,ll p, ll m=mod){if(p==1)return a;ll t=pw(a,p/2);
t=(m+(t*t)%m)%m;if(p%2!=0)t*=a;return (t+m)%m; }
 
ll n,m,k;
vector<ll> arr;
void solve(){
    cin>>n>>m>>k; arr.resize(m); rep(m) cin>>arr[i]; reverse(all(arr));
    ll ck=k;
    ll steps=0;
    if(arr.back()>ck){
        ll tmp = arr.back()/k; if(arr.back()%k!=0) tmp++; ck=tmp*k;
    }
    while(arr.size()>0){
        steps++;
        ll pd=0;
        while((arr.size()>0)&&(arr.back()<=ck)){ pd++; arr.pop_back(); }
        ck+=pd;
        if(arr.size()>0){
            ll li = arr.back();
            ll diff=li-ck;
            if(diff>0){
                ll tm = diff/k; if(diff%k!=0) tm++;
                ck+=(tm*k);
            }
        }
    }
    cout<<steps<<endl;
}
 
int main(){
    ll t=1;
    //cin>>t;
    rep(t) solve();
}