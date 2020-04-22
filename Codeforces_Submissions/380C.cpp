#include<iostream>
#include<vector>
#include<string>
#define xlr8 ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
int n,H;
struct Bracket
{
    int t=0,c=0,o=0;

    Bracket operator+(const Bracket& r)
    {
        Bracket ans;
        int tmp = min(o,r.c);
        ans.t = t + r.t +2*tmp;
        ans.o = o + r.o -tmp;
        ans.c = c + r.c -tmp;
        return ans;
    }
};
vector<Bracket> a;

void build()
{
    for(int i =n-1;i>0;--i)
        a[i] = a[i<<1] + a[(i<<1)|1];
}
int query(int l, int r )
{
    Bracket resl,resr;
    for(l+=n,r+=n;l<r;l>>=1,r>>=1)
    {
        if(l&1) 
        {
                resl = resl + a[l++];
             //   cout<<resl.t<<"*\n";  
        }
            
        if(r&1)
        {
              //  cout<<resr.t<<" r= "<<r-1<<" ";
                resr = a[--r] + resr;
             //   cout<<resr.t<<"\n";
        }
    }   
    
    Bracket ans  = resl + resr;
    return ans.t;
}


int main()
{
    xlr8;
    string s;
    cin>>s;
    n = s.length();
    H = sizeof(n)*8 - __builtin_clz(n);
    a.resize(2*n);

    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
            a[n+i].o=1;
        else 
            a[n+i].c=1;
    }
    build();
    //for(int i=0;i<3*n;i++)
   // cout<<i<<" "<<a[i].t<<" "<<a[i].o<<" "<<a[i].c<<"\n";

    int l,r,q;  
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<query(l-1,r)<<"\n";
    }
    return 0;
}