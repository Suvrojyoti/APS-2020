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
    ll n,i;
    cin>>n;
    if(n%4==1)
    	cout<<"0 A";
    else if(n%4==3)
    	cout<<"2 A";
    else if(n%4==2)
    	cout<<"1 B";
    else
    	cout<<"1 A";
    return 0;
}