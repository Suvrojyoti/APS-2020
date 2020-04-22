#include<bits/stdc++.h>
using namespace std;
long long n,m,N,M,ans;
string s1,s2;
int main ()
{
  cin>>s1>>s2;
  for(long long i=0;i<s2.size();i++)
  {
    if(s1[i]=='1')n++;
    if(s2[i]=='1')m++;
  }
  if((n+m)%2==0)ans++;
 
  for(long long i=s2.size();i<s1.size();i++)
  {
    if(s1[i]=='1')n++;
 
    if(s1[i-s2.size()]=='1')n--;
 
    if((n+m)%2==0)ans++;
  }
  cout<<ans;
}