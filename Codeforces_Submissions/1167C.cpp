#include <bits/stdc++.h>
using namespace std;
long int rnk[500005],parent[500005];
long int find_parent(long int a)
{
    while(parent[a]!=a)
    {
        //t=parent[a];
        parent[a]=parent[parent[a]];
        a=parent[a];
    }
    return a;
        
}

void uni(long int a,long int b)
{
    long int p1=find_parent(a);
    long int p2=find_parent(b);
    if(p1!=p2)
    {
        if(rnk[p1]>rnk[p2])
        {
            rnk[p1]+=rnk[p2];
            parent[p2]=p1;
        }
        else
        {
            rnk[p2]+=rnk[p1];
            parent[p1]=p2;
        }
    }
}

int main()
{
    long long int n,m,i,t,a,b;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        parent[i]=i;
        rnk[i]=1;
    }
    for(i=0;i<m;i++)
    {
        cin>>t;
        if(t>1)
        {
            cin>>a;
            t--;
            while(t--)
            {
                cin>>b;
                uni(a,b);
            }
        }
        else
        {
            while(t--)
            {
                long int temp;
                cin>>temp;
            }
        }
    }
    for(i=1;i<=n;i++)
        cout<<rnk[find_parent(i)]<<" ";
    return 0;
}