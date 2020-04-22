#include<bits/stdc++.h> 
using namespace std;
int main() {
	long long int t,n,i,sum;
	char arr[100],fib[100];
	cin>>n;
	t=1;
	i=0;
	for(i=0;i<n;i++)
	    cin>>arr[i];
	    i=0;
	while(i<n)
	{
	    
	    cout<<arr[i];
	    i=i+t;
	    t++;
	    
	}
	return 0;
}