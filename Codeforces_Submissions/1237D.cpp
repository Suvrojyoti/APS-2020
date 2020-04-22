#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

const int N=1e5+5;
int arr[N+N+N];
int ans[N+N+N];
pair<int,int> tree[12*N];
int i;

pair<int,int> merge(pair<int,int> a,pair<int,int> b)
{
    a.first=max(a.first,b.first);
    a.second=min(a.second,b.second);
    return a;
}
 
void build_tree(int node,int a,int b)
{
    if(a>b) return ;
    if(a==b)
    {
        tree[node].first=tree[node].second=arr[a];  
        return;
    }
    
    build_tree(node*2,a,(a+b)/2);
    build_tree(1+node*2,1+(a+b)/2,b);
    tree[node]=merge(tree[node*2],tree[1+2*node]);
}
 
pair<int,int> query(int node ,int a,int b,int i,int j)
{
    if(j<a || i>b){return {0,mod};}
    if(a>=i && b<=j) return tree[node];
    return merge ( query(2*node,a,(a+b)/2,i,j), query(1+2*node,1+(a+b)/2,b,i,j) );        
}
 
 
int mini[3*N];
 
 
int main() 
{   
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin>>n;       
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++) 
        arr[i+n]=arr[i];
    for(i=0;i<n;i++)
        arr[i+n+n]=arr[i];    
 
    build_tree(1,0,n+n+n-1);    
 
    pair<int,int> qq=query(1,0,n+n+n-1,0,n);
    
    if(qq.second+qq.second>=qq.first)
    {
        for(i=0;i<n;i++)
            cout<<-1<<" ";
        return 0;
    }
 
 
 
    for(int i=0;i<3*n;i++)
    {   
        int lo=i+1,hi=3*n-1,mi,an=i;
 
        while(lo<=hi)
        {
            mi=(lo+hi)/2;
            pair<int,int> qq=query(1,0,3*n-1,lo,mi);
 
            int min1=qq.second,max1=qq.first;
    
            if(arr[i]>2LL*min1)            
                hi=mi-1;
            else
                an=mi,lo=mi+1;
 
        }
        mini[i]=an;
        // cout<<arr[i]<<" "<<i<<" "<<an<<endl;
 
    }
 
 
    int bd=n+n+n-1;
    for(int i=n+n+n-1;i>=0;i--)
    {
        bd=min(mini[i],bd);
        if(i<n)
            ans[i]=bd-i+1;
    }
 
   for(i=0;i<n;i++)
    cout<<ans[i]<<" ";
 
}