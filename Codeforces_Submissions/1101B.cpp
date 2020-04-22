#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int a = -1, b;
	cin >> s;
	b = s.size() + 1;
	for(int i=0; i<s.size(); i++){
		if(s[i] == '[' && a == -1) a = i;
		else if(s[i] == ':' && a != -1){
			a = i;
			break;
		}
	}
	for(int i=s.size()-1; i>=0; i--){
		if(s[i] == ']' && b == s.size() + 1) b = i;
		else if(s[i] == ':' && b != s.size() + 1){
			b = i;
			break;
		}
	}
	if(b <= a || b == s.size() + 1 || a == -1 || s[b] != ':' || s[a] != ':'){
		cout << -1;
		return 0;
	}
	int out = 4;
	for(a++; a<b; a++){
		if(s[a] == '|') out++;
	}
	cout << out;
}