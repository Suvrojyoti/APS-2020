#include <bits/stdc++.h>
typedef long long ll;
#define endl '\n'
using namespace std;
//#define int ll
const int N=300010;
int a[N];
vector<int>basis(N,0);
int pow2[N];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,tt;cin>>n>>tt;
    pow2[0]=1;
    for (int i=1;i<=n;i++){
        pow2[i]=(pow2[i-1]*2)%1000000007;
    }
    for (int i=1;i<=n;i++) cin>>a[i];
    basis[0]=0;
    for (int i=1;i<=n;i++){
       // basis[i]=basis[i-1];
       for(int j=1;j<=i;j++)
       {
            int cur=basis[j];
            a[i]=min(a[i],a[i]^cur);
        }
        if (a[i]) basis[i]=a[i];
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         if(basis[j])
    //             cout<<basis[j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while (tt--){
        int l,x;cin>>l>>x;
        // for (auto cur:basis[l]) x=min(x,x^cur);
        int cnt=0;
        for(int j=1;j<=l;j++)
        {
            int cur=basis[j];
            x=min(x,x^cur);
            if(cur)
                cnt++;
        }
        if (x) cout<<0<<endl;
        else cout<<pow2[l-cnt]<<endl;
    }
    return 0;
}