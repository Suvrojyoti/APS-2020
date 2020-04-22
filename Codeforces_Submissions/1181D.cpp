#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairs; 
int main()
{
    long long int n,m,q,arr[500100],i,j,sum,cnt[500100]={0},mx,a,t;
    set<pairs> s;
    cin>>n>>m>>q;
    mx=-1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
        cnt[arr[i]]++;
        if(cnt[arr[i]]>mx)
            mx=cnt[arr[i]];
    }
   
    for(i=1;i<=m;i++)
    {
        pairs x=make_pair(cnt[i],i);
        sum+=mx-cnt[i];
        s.insert(x);
    }
    
    
   /* for(auto it=s.begin();it!=s.end();it++)
        cout<<it->second<<" "<<it->first<<"\n";
    cout<<"\n";
    //cout<<sum<<"\n";*/
    //cout<<mx<<"*\n";
    memset(arr,0,500100*sizeof(arr[0]));
    for(i=n+1;i<=mx*m;i++)
    {
        auto it=s.begin();
        pairs x= make_pair(it->first+1,it->second);
        arr[i-n-1]=it->second;
       // cout<<arr[i-n-1]<<"#\n";
        s.erase(it);
        s.insert(x);
    }
    while(q--)
    {
        cin>>a;
        if(a>mx*m)
        {
            t=a%m;
            if(t==0)
                cout<<m;
            else
                cout<<t;
        }
        else
            cout<<arr[a-n-1];
        cout<<"\n";
    }
    /* for(i=0;i<=172;i++)
        cout<<i<<" "<<arr[i]<<"\n";*/
    return 0;
        
}