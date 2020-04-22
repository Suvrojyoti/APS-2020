#include <bits/stdc++.h>
using namespace std;
int n,a[2010],ans,l,r;
set<int> s;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    l=n-1;
    while(l>=0&&s.find(a[l])==s.end())
    {
        s.insert(a[l]);
        l--;
    }
    while(l<=n-1)
    {
        while(r<=n-1&&s.find(a[r])==s.end())
        {
            s.insert(a[r]);
            r++;
        }
        //cout<<r<<" "<<l<<"\n";
        ans=max(ans,r+n-l-1);
        if(l==n-1)
            break;
        s.erase(a[l+1]);
        l++;
    }
    cout<<n-ans;
}