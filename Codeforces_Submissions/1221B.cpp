#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll n;
bool check(ll i, ll j)
{
    if(i>-1&&j>-1&&i<n&&j<n)
        return true;
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
ll i,j,k;
queue <pair<ll,pair<ll,ll>>> q;
cin>>n;
ll arr[n+2][n+2];
memset(arr,-1,sizeof(arr));
q.push({1,{0,0}});
while(!q.empty())
{
    auto p=q.front();
    q.pop();
    i=p.second.first;
    j=p.second.second;
    ll col=p.first;
    arr[i][j]=col;
    col=col^1;
if(check(i+2,j+1)&&arr[i+2][j+1]==-1)
{
    q.push({col,{i+2,j+1}});
    arr[i + 2][j + 1] = 5;
}

if (check(i + 2, j - 1) && arr[i + 2][j - 1] == -1)
{
    q.push({col, {i + 2, j - 1}});
    arr[i+2][j-1]=5;
}

if (check(i - 2, j + 1) && arr[i - 2][j + 1] == -1)
{
    q.push({col, {i - 2, j + 1}});
    arr[i - 2][j+1] = 5;
}

if (check(i - 2, j - 1) && arr[i - 2][j - 1] == -1)
{

    q.push({col, {i - 2, j - 1}});
    arr[i - 2][j-1] = 5;
}

if (check(i - 1, j + 2) && arr[i - 1][j + 2] == -1)
{
    q.push({col, {i - 1, j + 2}});
    arr[i - 1][j + 2] = 5;
}

if (check(i + 1, j + 2) && arr[i + 1][j + 2] == -1)
{
    q.push({col, {i + 1, j + 2}});
    arr[i + 1 ][j + 2] = 5;
}

if (check(i - 1, j - 2) && arr[i - 1][j - 2] == -1)
{
    q.push({col, {i - 1, j - 2}});
    arr[i-1][j-2]=5;
}

if (check(i + 1, j - 2) && arr[i + 1][j - 2] == -1)
{
    q.push({col, {i + 1, j - 2}});
    arr[i + 1][j - 2] = 5;
}
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[i][j]==0)
            cout<<"W";
        else
            cout<<"B";
    }
    cout<<endl;
}
return 0;
}