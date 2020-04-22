#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
string s;
cin>>s;
ll i;
char mn='z';
for(i=0;i<s.length();i++)
{
    if(s[i]>mn)
        cout<<"Ann";
    else
    {
            cout<<"Mike";
    }
    mn=min(s[i],mn);
    cout<<endl;
    
}
return 0;
}