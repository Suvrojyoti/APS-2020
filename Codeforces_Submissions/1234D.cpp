#include <bits/stdc++.h>
#define ll long long int
using namespace std;
struct str{
    ll arr[26]={0};
};
str tree[4*100005];
ll a[500005],k;
str add(str a,str b)
{
    str c;
    ll i;
    for(i=0;i<26;i++)
    {
        c.arr[i]=a.arr[i]+b.arr[i];
    }
    return c;
}

void build(ll node,ll l,ll r)
{
    ll i;
    if(l==r)
    {
        for(i=0;i<26;i++)
            tree[node].arr[i]=0;
        // for(i=1;i<=5;i++)
        tree[node].arr[a[l]]++;
        return;
    }
    ll mid=(l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node]=add(tree[node*2],tree[node*2+1]);
}

void update(ll node,ll l,ll r,ll idx,ll val)
{
    ll i;
    if(l==r)
    {
        for(i=0;i<26;i++)
            tree[node].arr[i]=0;
        a[l]=val;
        // for(i=1;i<=5;i++)
        tree[node].arr[a[l]]++;
        return;
    }
    ll m=(l+r)/2;
    if(l<=idx&&idx<=m)
        update(node*2,l,m,idx,val);
    else
        update(node*2+1,m+1,r,idx,val);
    tree[node]=add(tree[node*2],tree[node*2+1]);
}

ll query(ll node,ll start,ll end,ll l,ll r,ll idk)
{
    if(r<start||end<l||end<start)
    {
        return 0;
    }
   
    if(l<=start&&end<=r)
        return tree[node].arr[idk];
   
    ll mid=(start+end)/2;
    ll p1=query(node*2,start,mid,l,r,idk);
    ll p2=query(node*2+1,mid+1,end,l,r,idk);
    return p1+p2;
}

int main()
{
    string s;
    cin>>s;
    ll n=s.size();
    //uuuu=0;
    ll uuuu=0;
    for(ll i=0;i<n;i++)
    {
        a[i]=s[i]-'a';
        uuuu=0;
    }
    build(1,0,n-1);
    uuuu=0;
    ll q,qt,l,r,idx,su,kjfkj;
    char lol;
    uuuu=0;
    cin>>q;
    while(q--)
    {
        cin>>qt;
        if(qt==2)
        {
            cin>>l>>r;
            uuuu=0;
            su=0;
            for(ll i=0;i<26;i++)
            {
             kjfkj=query(1,0,n-1,l-1,r-1,i);  
             if (kjfkj>0)
             {
                 su+=1;
                 uuuu=0;
             }
            }
            cout<<su<<endl;
            uuuu=0;
        }
        else{
            cin>>idx;
            uuuu=0;
            cin>>lol;
            uuuu=0;
            update(1,0,n-1,idx-1,lol-'a');
            uuuu=0;
        }
    }
}