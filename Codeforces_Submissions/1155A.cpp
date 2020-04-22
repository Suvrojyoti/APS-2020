#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n,i;
  char c,a;
  cin>>n;
  cin>>c;
  for(i=2;i<=n;i++)
  {
      cin>>a;
      if(a<c)
      {
        cout<<"YES"<<endl<<i-1<<" "<<i;
        exit(0);
      }
      c=a;
        
  }
  cout<<"NO";
  return 0;
}