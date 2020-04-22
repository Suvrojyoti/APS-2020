#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,s,c;
	cin>>n>>s;
	if(n>=s)
	    cout<<"1";
	 else
	 {
	     c=ceil(s/n);
	     c=s/n;
	     if(s%n!=0)
	        c++;
	     cout<<c;
	 }
	return 0;
}