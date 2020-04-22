#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,l,r;
ll res1,res2;
vector<ll> mn,mx;
 
int main()
{
   
    cin>>n>>l>>r;
    l--;
    r--;
    mx.push_back(1);
    mn.push_back(1);
    while(l)
    {
        mn.push_back(mn.back()*2);
        l--;
    }
    while(mn.size()<n)
        mn.push_back(1);
    while(r)
    {
        mx.push_back(mx.back()*2);
        r--;
    }
    while(mx.size()<n)
        mx.push_back(mx.back());
    
    for(int i=0;i<n;i++)
    {
        res1+=mn[i];
        res2+=mx[i];
    }
    cout<<res1<<" "<<res2<<endl;
        
}