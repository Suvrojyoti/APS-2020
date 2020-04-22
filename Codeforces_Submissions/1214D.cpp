#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
ll n,m;
vector <ll> vec;
vector<vector<int>> arr;
void dfs(ll u,ll v)
{
    arr[u][v]=1;
    if (u+1<=n&&arr[u+1][v]==0)
        dfs(u+1,v);
    if (v + 1 <= m && arr[u][v+1] == 0)
        dfs(u, v+1);
}

void dfs1(ll u, ll v)
{
    arr[u][v]++;
   // cout<<"*"<<u-1<<" "<<v<<" "<<arr[u-1][v]<<endl;
    if (u - 1 >= 0 && arr[u - 1][v] == 1)
        dfs1(u - 1, v);
    if (v - 1 >= 0 && arr[u][v-1] == 1)
        dfs1(u, v-1);
    vec.push_back(u+v);
}

int main()
{
#ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
#endif
            ll i, j;
            cin >> n >> m;
            arr.resize(n + 2, vector<int>(m + 2, 0));
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    char c;
                    cin >> c;
                    if(c=='.')
                        arr[i][j]=0;
                    else
                        arr[i][j] = -1;
                }
            }
            dfs(0, 0);
           /* for (i = 0; i < n; i++)
            {
                for (j=0;j<m;j++)
                    cout<<arr[i][j]<<" ";
                cout<<endl;
            }
            */
            if(arr[n-1][m-1]==0)
            {
                cout<<"0";
                exit(0);
            }
            dfs1(n-1, m-1);
           /* for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                    cout << arr[i][j] << " ";
                cout << endl;
            }
            */
            map <ll,ll> mp;
            for(auto it:vec)
            {
                mp[it]++;
            }
            mp[n+m-2]++;
            mp[0]++;
            for(auto it:mp)
            {
                if(it.second==1)
                {
                    cout<<"1";
                    exit(0);
                }
            }
            cout<<"2";
            return 0;
}