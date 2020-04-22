#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
int n=0;	
int p[200000];
int x=0,a=0,y=0,b=0,k=0;
double coeff[200000];
vector<int> v;
vector<int> inp;
 
bool check(int mm)
{
	v.clear();
	for (int i=0; i<mm; i++)
	{
		v.push_back(coeff[i]);	
	}		
	sort(v.rbegin(), v.rend());
	int sum=0;
	for (int i=0; i<v.size(); i++)
		sum+=inp[i]*v[i]/100;
	return (sum>=k);
}
 
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int q=0;
	cin >> q;
	while (q--)
	{
		cin >> n;
		inp.clear();
		for (int i=0; i<n; i++){
			cin >> p[i];
			inp.push_back(p[i]);
		}
		sort(inp.rbegin(), inp.rend());
		cin >> x >> a;
		cin >> y >> b;
		for (int i=0; i<n; i++)
		{
			coeff[i] = 0;
			if ((i+1)%a==0)
				coeff[i]+=x;
			if ((i+1)%b==0)
				coeff[i]+=y;
		}
		cin >> k;		
		int ll = 1, rr = n;
		while (ll<rr-1)
		{
			int mm = (ll+rr)/2;
			if (check(mm))
				rr = mm;
			else
				ll = mm;	
		}
		if (check(ll))
			cout << ll<<endl;
		else if (check(rr))
			cout << rr << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}