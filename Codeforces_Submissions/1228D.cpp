

#include <bits/stdc++.h>
using namespace std;
const int N=1e5+20;
int n,m,u,v,dp[N],color=1;
vector <int> adj[N];
bool vis[N];
map <vector <int>, vector <int>> adj_map;

void go(int node)
{
	vis[node]=true;
	for(auto child:adj[node])
		if(not vis[child]) go(child);
}

int main()
{
	cin>>n>>m;
	while(m--)
	{
		scanf("%d%d",&u,&v);
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	go(1);
	for(int i=1;i<=n;i++)
		if(not vis[i]) 
		{
		     cout<<"-1";
		    return 0;
		}

	for(int i=1;i<=n;i++)
	{
		sort(adj[i].begin(),adj[i].end());
		adj_map[adj[i]].push_back(i);
	}

	if(adj_map.size()!=3) 
	{
		     cout<<"-1";
		    return 0;
	}
	for(auto p:adj_map)
	{
		auto vec=p.second;
		for(auto node:vec) dp[node]=color;
		color++;
	}
	for(int i=1;i<=n;i++)
	{
	    cout<<dp[i]<<" ";
	}
}