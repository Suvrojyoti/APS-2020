#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
ll dsu[200005], rnk[200005], dsu1[200005], rnk1[200005],res;

ll find_parent0(ll a)
{
    while(a!=dsu[a])
    {
        dsu[a]=dsu[dsu[a]];
        a=dsu[a];
    }
 //   cout<<a<<" ";
    return a;
}

void uni0(ll a,ll b)
{
    a=find_parent0(a);
    b=find_parent0(b);
    if(a==b)
    {
        cout<<"*";
        return;
    }
    res+=rnk[a]*rnk[b];
    if(rnk[a]>rnk[b])
    {
        rnk[a]+=rnk[b];
        dsu[b]=dsu[a];
    }
    else
    {
        rnk[b]+=rnk[a];
        dsu[a]=dsu[b];
    }
    
}

ll find_parent1(ll a)
{
    while (a != dsu1[a])
    {
        dsu1[a] = dsu1[dsu1[a]];
        a = dsu1[a];
    }
    return a;
}

void uni1(ll a, ll b)
{
    a = find_parent1(a);
    b = find_parent1(b);
    if(a==b)
    {
        cout<<"*";
        return;
    }
    res += rnk1[a] * rnk1[b];
    if (rnk1[a] > rnk1[b])
    {
        rnk1[a] += rnk1[b];
        dsu1[b] = dsu1[a];
    }
    else
    {
        rnk1[b] += rnk1[a];
        dsu1[a] = dsu1[b];
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
   ll test,n,a,b,w,i;
   
   cin>>n;
   for(i=0;i<=n+1;i++)
   {
       dsu[i]=dsu1[i]=i;
       rnk[i]=rnk1[i]=1;
   }
   for(i=0;i<n-1;i++)
   {
     /*  for(ll j=1;j<=n;j++)
        cout<<dsu[j]<<" ";
       cout<<endl;*/
       cin>>a>>b>>w;
      // cout<<a<<" "<<b<<" "<<w<<"**"<<endl;
       if(w==0)
        uni0(a,b);
       else
        uni1(a,b);
    
  //  cout<<res<<endl;


   }
   res+=res;
   for(i=1;i<=n;i++)
   {
       a=find_parent0(i);
       b=find_parent1(i);
       res+=(rnk[a]-1)*(rnk1[b]-1);
   }
   cout<<res;
   return 0;
}