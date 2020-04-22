#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n,m,i,s,a[333000],q;
    cin>>n;
    
	for(i=0;i<n;i++) {
		cin>>a[i];
		s+=a[i];
	}
	sort(a,a+n);
	cin>>m;
	while(m--) {
	    cin>>q;
	    cout<<s-a[n-q]<<endl;
	}
		return 0;
}