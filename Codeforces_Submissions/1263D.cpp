#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
ll dsu[200005],rnk[200005],n  ;
ll find_par(ll a)
{

    while(a!=dsu[a])
    {
        a=dsu[a];
        dsu[a]=dsu[dsu[a]];
        
    }
    return a;
}

void uni(ll a,ll b)
{
   a=find_par(a);
   b=find_par(b);
    // cout<<a<<" "<<b<<endl;
    if(a==b)
        return;
        
    // cout<<"hi";
   if(rnk[a]>rnk[b])
   {
       rnk[a]+=rnk[b];
       dsu[b]=a;
   }
   else
   {
       rnk[b]+=rnk[a];
       dsu[a]=b;
   }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll i,j;
    set <char> s[200005];
    cin>>n;
    for(i=1;i<=n+5;i++)
    {
        dsu[i]=i;
        rnk[i]=1;
    }
    //  for(i=1;i<=n+5;i++)
    // {
    //     cout<<dsu[i]<<" ";
    //     // cout<<rnk[i]<<" ";
    // }
    string str;
    
    for(i=1;i<=n;i++)
    {
        cin>>str;
        for(auto it:str)
            s[i].insert(it);
    }
    
    for(i=0;i<26;i++)
    {
       
        char c='a'+i;
        bool flag=true;
        ll temp=0;
        for(j=1;j<=n;j++)
        {
            if(s[j].find(c)!=s[j].end())
            {
                if(flag)
                {
                    temp=j;
                    flag=false;
                    //cout<<j<<" "<<c<<endl;
                }
                else
                {
                    // cout<<c<<" "<<temp<<" "<<j<<endl;
                    uni(temp,j);
                    // for(i=0;i<n;i++)
                    //     cout<<dsu[i]<<" ";
                    // cout<<endl;
                }
                
            }
        }
    }
    ll cnt=0;
    for(i=1;i<=n;i++)
    {
        if(dsu[i]==i)
            cnt++;
    }
    cout<<cnt;
    return 0;
}