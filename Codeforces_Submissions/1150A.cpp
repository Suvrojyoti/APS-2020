#include <bits/stdc++.h> 
#define pb push_back
using namespace std;

int main() {
    long long int n,m,r,t1,t2,mx,mn,i,tk;
    cin>>n>>m>>r;
    tk=r;
    mx=9999999999;
    for(i=0;i<n;i++)
    {
        cin>>t1;
        if(mx>t1)
            mx=t1;
    }
    mn=-999999999999;
    for(i=0;i<m;i++)
    {
        cin>>t2;
        if(mn<t2)
            mn=t2;
    }
    t1=r/mx;
    r=r%mx;
   // cout<<r;
    t2=t1*mn;
   // cout<<t2<<" ";
    r=r+t2;
    if(r<tk)
    cout<<tk<<"\n";
    else
    cout<<r<<"\n";
    
    
	return 0;
}