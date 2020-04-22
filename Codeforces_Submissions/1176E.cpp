#include <bits/stdc++.h>
using namespace std;
vector <long long int> v[200005],v1;
long long int vis[200005],ans1,ans2;

void dfs(long long int k)
{
    
        for(auto itr=v[k].begin();itr!=v[k].end();itr++)
        {
            if(!vis[*itr])
            {
                if(vis[k]==1)
                {
                    vis[*itr]=2;
                    ans2++;
                }
                else
                {
                    vis[*itr]=1;
                    ans1++;
                }
                dfs(*itr);
            }
        }
}

int main()
{
    long long int test,a,b,i,e,n;
    cin>>test;
    while(test--)
    {
        cin>>n>>e;
        ans1=ans2=0;
        for(i=0;i<n+4;i++)
            v[i].clear();
        v1.clear();
        memset(vis,0,n*sizeof(vis[0]));
        for(i=0;i<e;i++)
        {
            cin>>a>>b;
            v[a-1].push_back(b-1);
            v[b-1].push_back(a-1);
        }
        vis[0]=1;
        ans1++;
        dfs(0);
        if(ans1<ans2)
        {
            cout<<ans1<<"\n";
            for(i=0;i<n;i++)
            {
                if(vis[i]==1)
                    cout<<i+1<<" ";
            }
        }
        else
        {
            cout<<ans2<<"\n";
            for(i=0;i<n;i++)
            {
                if(vis[i]==2)
                    cout<<i+1<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}