#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
	ll n,test;
	cin>>test;
	while(test--)
	{
	    bool flag=0;
	    ll i,j,fi=-1,la=-1,cnt=0;
	    string s;
	    cin>>s;
	    n=s.length();
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1'&&!flag)
	        {
	            fi=i;
	            la=i;
	            cnt++;
	            flag=1;
	        }
	        else if(s[i]=='1')
	        {
	            la=i;
	            cnt++;
	        }
	    }
	    if(la==-1)
	        cout<<"0"<<endl;
	   else
	    cout<<la-fi+1-cnt<<endl;
	}
	
	return 0;
}