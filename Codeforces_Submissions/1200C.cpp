#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
const ll inf = 100000000000000000;

int main()
{
   ll n,m,q,i,g,n1,m1;
   cin>>n>>m>>q;
   g=__gcd(n,m);
   n1=n/g;
   m1=m/g;
   while(q--)
   {
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       b--; d--;
       if(a==1)
        b/=n1;
       else
        b/=m1;
       if(c==1)    
        d/=n1;
       else
        d/=m1;
       if(b==d)
        cout<<"YES";
       else
        cout<<"NO";
       cout<<endl;
   }
   return 0;
}