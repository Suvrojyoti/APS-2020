#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll arr[100005],n,a,b,k;

ll src(ll l,ll u)
{
    
    ll t,t1,tot1,tot2;
    t=upper_bound(arr,arr+k,u)-lower_bound(arr,arr+k,l);
   // cout<<l<<" "<<u<<" "<<t<<endl;
   ll x=t;
    if(t==0)
        t= a;
    else
        t=(u-l+1)*b*t;
    if(l==u||x==0)
        return t;
    t1=(l+u)/2;
   /* tot1=upper_bound(arr,arr+k,t1)-lower_bound(arr,arr+k,l);
    if(tot1==0)
        tot1=a;
    else
        tot1=(t1-l+1)*b*tot1;
    tot2=upper_bound(arr,arr+k,u)-lower_bound(arr,arr+k,t1+1);
    if(tot2==0)
        tot2=a;
    else
        tot2=(l-t1-1+1)*b*tot2;
    if(tot1+tot2<t)
        return src(l,t1)+src(t1+1,u);
    else
        return t;
    */
    return min(t,src(l,t1)+src(t1+1,u));
        
}
 
int main() 
{
    ll i;
    cin>>n>>k>>a>>b;
    for(i=0;i<k;i++)
        cin>>arr[i];
    sort(arr,arr+k);
   /* for(i=0;i<k;i++)
        cout<<arr[i];*/
  //  auto it=lower_bound(arr,arr+2,4);
    //cout<<*it<<" ";
    cout<<src(1,1<<n);
}