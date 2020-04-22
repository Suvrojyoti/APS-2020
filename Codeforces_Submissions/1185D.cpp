#include "bits/stdc++.h"
using namespace std;
const long long md=1e9+7;
long long a[1000005],n;

map<int,int> mp;

bool check(int ignore, int d){
	vector<int> v;
	for(int i=0;i<n;++i) if(i!=ignore){
		v.push_back(a[i]);
	}
	for(int i=1;i<v.size();++i){
		if(v[i]-v[i-1] != d)
			return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		mp[a[i]] = i+1;
	}
	sort(a,a+n);
	if(n==2)
		return cout<<1,0;
	if(check(0,a[2]-a[1]))
		return cout<<mp[a[0]],0;
	if(check(1,a[2]-a[0]))
		return cout<<mp[a[1]],0;
	int d = a[1]-a[0];
	for(int i=1;i<n;++i){
		if(a[i]-a[i-1] != d){
			if(check(i-1,d))
				return cout<<mp[a[i-1]],0;
			else if(check(i,d))
				return cout<<mp[a[i]],0;
			else
				return cout<<-1,0;
		}
	}
	cout<<1;

}