#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int t;
	cin >> t;
	while(t--) {
		
		int l;
		cin >> l;
		string s1, s2;
		cin >> s1 >> s2;
		
		vector<int > a;
		for(int i = 0; i < l; i++) {
			
			if(s1[i] != s2[i]) 
				a.push_back(i);
		}
		
		if(a.size() == 0 || (a.size() == 2 && s1[a[0]] == s1[a[1]] && s2[a[0]] == s2[a[1]])) 
			cout << "Yes\n";
		else 
			cout << "No\n";
	}
}