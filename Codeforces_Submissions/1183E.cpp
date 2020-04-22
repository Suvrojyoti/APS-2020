#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long int n,k,ans=0,i;
    cin>>n>>k;
    string str,s1,nv;
    cin>>str;
    queue <string> q;
    set <string> s;
    q.push(str);
    s.insert(str);
    while(!q.empty()&&s.size()<k)
    {
        s1=q.front();
        q.pop();
        for(i=0;i<s1.size();i++)
        {
            nv=s1;
            nv.erase(i,1);
            if(!s.count(nv)&&s.size()+1<=k)
            {
                q.push(nv);
                s.insert(nv);
                ans+=n-nv.size();
            }
        }
    }
    if(s.size()<k)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;
    return 0;
}