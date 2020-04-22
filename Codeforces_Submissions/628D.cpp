#include <bits/stdc++.h>
#define pb push_back

using namespace std;
typedef vector<int> vi;
typedef long long ll;

 

const int mod=1000000007;

 
string a, b;
string num;
int dp[2001][2001][2];
int d, m;
 
int f(int u, int r, int h) 
{
	if(u>=num.size()) 
	{
		return r==0;
	}
 
	int &ret=dp[u][r][h];
	if(ret!=-1)
	    return ret;
	    
	int y=num[u]-'0';
	
	int p=u+1;
	ret=0;
	ll rx=0;
	if(h) 
	{
		if(p%2!=0 && y!=d)
			rx=f(u+1, (r*10+y)%m, h);
			
		else if(p%2==0 && y==d)
			rx=f(u+1, (r*10+y)%m, h);
			
		for(int j=0;j<y;j++) 
		{
			if((j==0&&u==0)||(p%2==0 && j!=d) || (p%2!=0 && j==d))
			    continue;
			rx+=f(u+1, (r*10+j)%m, 0);
			rx%=mod;
		}
	}
	else {
		for(int j=0;j<10;j++) 
		{
			if((j==0&&u==0)||(p%2==0 && j!=d) || (p%2!=0 && j==d))
			    continue;
			rx+=f(u+1, (r*10+j)%m, 0);
			rx%=mod;
		}
	}
	ret=rx;
	return ret;
}
bool isd() 
{
	bool ok=1;
	int r=0;
	for(int j=0;j<a.size();j++) 
	{
		if(j%2==0 && a[j]-'0'==d) ok=0;
		if(j%2 && a[j]-'0'!=d)ok=0;
		r*=10;
		r+=a[j]-'0';
		r%=m;
	}
	return ok && !r;
}
 
int main(void) 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>m>>d;
	cin>>a>>b;
	num=a;
	memset(dp,-1,sizeof dp);
	ll ra=f(0,0,1);
	num=b;
	memset(dp,-1,sizeof dp);
	ll rb=f(0,0,1);
	//cout<<ra<<" "<<rb<<endl;
	cout<<((rb-ra+mod)%mod+isd())%mod<<endl;
	
	return 0;
}