#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define endl '\n'
typedef vector<vector<ll>> matrix;
const ll INF = 1e18;
const int MAX = 2e5+4;
const int MOD = 1e9+7;
//vector<int> dp(MAX);
string doSum(string a, string b)
{
    if(a.size() < b.size())
        swap(a, b);

    int j = a.size()-1;
    for(int i=b.size()-1; i>=0; i--, j--)
        a[j]+=(b[i]-'0');

    for(int i=a.size()-1; i>0; i--)
    {
        if(a[i] > '9')
        {
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9')
    {
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}
string mini(string x,string y){
	if(x.size()<y.size()) return x;
	if(x.size()>y.size()) return y;
	for(int i=0; i<x.size() ;i++){
		if(x[i]<y[i]) return x;
		if(x[i]>y[i]) return y;
	}
	return x;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
//	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int n;
	cin >> n;
	string s;
	cin >> s;
	string t=s;
	int mid=n/2;
	while(s[mid]=='0') mid--;
	t=mini(t,doSum(s.substr(0,mid),s.substr(mid)));
	mid=(n+1)/2;
	while(s[mid]=='0' && mid<n) mid++;
	if(mid!=n)
	t=mini(t,doSum(s.substr(0,mid),s.substr(mid)));
	cout << t;
	return 0;
}