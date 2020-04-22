#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,i,cnt=0;
string s,s1;
cin>>n;
cin>>s;

for(i=0;i<s.size();i+=2)
{
    if(s[i]=='a'&&s[i+1]!='b')
    {
        cnt++;
        s1+="ab";
    }

    else if(s[i]=='b'&&s[i+1]!='a')
    {
        cnt++;
        s1+="ba";
    }
    else
    {
        s1+=s[i];
        s1+=s[i+1];
    }
    
}
cout<<cnt<<endl<<s1;

}