#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bool vis[100005];
vector <ll> vect;
vector <ll> vec[100005];

void dfs(ll a)
{
    vis[a]=1;
    cout<<vect[a]<<" ";
    for(auto it:vec[a])
    {
        if(!vis[it])
            dfs(it);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    ll n,arr[3][100005],i,a,b,j;
   
    cin>>n;
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
            cin>>arr[i][j];
    }
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    ll flag=0;
    for(i=1;i<=n;i++)
    {
        if(vec[i].size()!=2)
        {
            flag++;
        }
    }
    if(flag!=2)
    {
        cout<<"-1";
        exit(0);
    }
    ll ar[6][3]={{0,1,2},{0,2,1},{1,2,0},{1,0,2},{2,1,0},{2,0,1}};
    ll mn=0x3f3f3f3f3f3f3f3f;
    ll index=-1;
    for(i=0;i<6;i++)
    {
        ll a1=ar[i][0],b1=ar[i][1],c1=ar[i][2];
        ll sum=0;
        for(j=a1;j<n;j+=3)
            sum+=arr[0][j];
        // cout<<"first "<<sum<<" ";
        for (j = b1; j < n; j += 3)
            sum += arr[1][j];
        // cout<<"second "<<sum<<" ";
        for (j = c1; j < n; j += 3)
            sum += arr[2][j];
        // cout<<"third "<<sum<<" ";
        // cout<<sum<<endl;
        if(sum<mn)
        {
            mn=sum;
            index=i;
        }
        // mn=min(sum,mn);
    }
    cout<<mn<<endl;
    //j=0;
    vect.push_back(0);
    for(i=0;i<n;i++)
    {
        if(i%3==0)
            vect.push_back(ar[index][0]+1);
            //cout<<ar[index][0]+1<<" ";
        else if(i%3==1)
            vect.push_back(ar[index][1]+1);
            // cout<<ar[index][1]+1<<" ";
        else
            vect.push_back(ar[index][2]+1);
            // cout<<ar[index][2]+1<<" ";
    }
    dfs(1);
    // for(i=3;i<n;i+=3)
    //     cout<<ar[index][0]+1<<" "<<ar[index][1]+1<<" "<<ar[index][2]+1<<" ";
    // //cout<<"*******";
    // if(n-i-3==2)
    //     cout<<ar[index][0]+1<<" "<<ar[index][1]+1<<" ";
    // else if(n-i-3==1)
    //     cout<<ar[index][0]+1<<" ";
    return 0;
}