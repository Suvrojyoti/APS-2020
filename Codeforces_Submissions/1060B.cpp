#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned long long int num,n,sum,t,i;
  string s,k;
  cin>>k;
  n=k.length();
  if(n==1)
    cout<<k;
  else
  {
      for(i=0;i<n-1;i++)
        s[i]='9';
  
     s[i]='\0';
     num=stoull(k);
     t=stoull(s);
     t=num-t;
     sum=9*(i);
     //cout<<sum<<" ";
     while(t!=0)
     {
         sum+=t%10;
         t=t/10;
     }
     cout<<sum;
}
  return 0;
}