#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;

#define MOD 1000000007
using namespace std;
#define inf 1e18
const ll INF = 1e18L + 5;
const ll maxn = 205;

ll ceel(ll a, ll b)
{
    if (a % b == 0)
        return a / b;
    return a / b + 1;
}
int main()
{
   ll test,a,b,c,i,j,k;
   cin>>test;
   while(test--)
   {
       cin>>a>>b>>c;
       ll fa,fb,fc;
       ll mn=inf;
       for(i=1;i<=2*a;i++)
       {
           for(j=i;j<=2*b;j+=i)
           {
               
               ll k=c/j;
               //cout<<i<<" "<<j<<" "<<j*k<<endl;
               if(j<=k*j)
               {
                   
                   //cout<<i<<" "<<j<<" "<<j*k<<endl;
                   if(mn>abs(a-i)+abs(j-b)+abs(j*k-c))
                   {
                       //cout<<i<<" "<<j<<" "<<j*k<<endl;
                       mn=abs(a-i)+abs(j-b)+abs(j*k-c);
                       fa=i,fb=j,fc=j*k;
                   }
               }
               k++;
               if(j<=k*j)
               {
                   
                   //cout<<i<<" "<<j<<" "<<j*k<<endl;
                   if(mn>abs(a-i)+abs(j-b)+abs(j*k-c))
                   {
                       //cout<<i<<" "<<j<<" "<<j*k<<endl;
                       mn=abs(a-i)+abs(j-b)+abs(j*k-c);
                       fa=i,fb=j,fc=j*k;
                   }
               }
           }
       }
       cout<<mn<<endl<<fa<<" "<<fb<<" "<<fc<<endl;
   }
   return 0;
   
}