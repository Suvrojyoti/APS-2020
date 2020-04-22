#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,arr[100000],u,v,i,h,n,m,count;
    vector <long long int> adj[100000];
    vector <long long int> l;
    vector <bool> vals;
    cin>>n;
    i=0;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=-1)
        {
            adj[i].push_back(arr[i]);
            adj[arr[i]].push_back(i);
        }
    }
    queue <long long int> q;
    vals.assign(n+1,0);
    l.assign(n+1,0);
    m=0;
    for(i=1;i<=n;i++)
    {
        count=0;
        if(arr[i]==-1)
        {
            
            vals[i]=1;
            q.push(i);
            //count++;
            l[i]=1;
            while(!q.empty())
            {
                h=q.front();
    
                q.pop();
                //count++;
                for(auto it:adj[h])
                {
                    if(vals[it]==0)
                    {
                        q.push(it);
                        vals[it]=1;
                        l[it]=l[h]+1;
                    }
                }
            }
        }
        //if(count>m)
          //  m=count;
    }
    m=-1;
    for(i=0;i<l.size();i++)
    {
        if(m<l[i])
            m=l[i];
    }
    cout<<m;
    return 0;
}