#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout << itr << ' ';}cout << endl;
#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b){ if(a % b == 0) return a / b; return a / b + 1;}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
string s,s1;
ll i,j,n,k,p;
cin>>s;
cin>>k;
n=s.length();
bool flag=0;
p=0;
for(auto it:s)
{
    if(it=='?' or it=='*')
        p++;
    if(it=='*')
        flag=1;
}
p*=2;
// cout<<n<<" "<<p<<" "<<k<<endl;
if(n-p>k)
{
    cout<<"Impossible";
    exit(0);
}
if(k> n-p/2 and flag==0)
{
    cout << "Impossible";
    exit(0);
}
stack <char> st;
if(k<=n-p/2)
{
    ll req=n-p/2-k;
    for(auto it:s)
    {
        if(req!=0 and (it=='?' or it=='*'))
        {
            st.pop();
            req--;
        }
        else if(it!='?' and it!='*')
        {            
            st.push(it);
        }
        
    }
    while(!st.empty())
    {
        s1+=st.top();
        st.pop();
    }
    reverse(s1.begin(),s1.end());
    cout<<s1;
    exit(0);
}
ll req=k-(n-p/2);
for(auto it:s)
{
    if(it!='*' and it!='?')
        s1+=it;
    if(it=='*')
    {
        char b=s1.back();
        while(req)
        {
            s1+=b;
            req--;
        }
    }
}
cout<<s1<<endl;
return 0;
}