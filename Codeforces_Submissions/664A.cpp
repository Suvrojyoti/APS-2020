#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
    string a,b;
    cin>>a>>b;
    if(a==b)
    	cout<<a;
    else
    	cout<<1;
    return 0;
}