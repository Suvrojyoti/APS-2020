#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,m;
   cin>>n>>m;
   if(m==0)
    cout<<"1";
    else
   cout<<min(m,n-m);
   return 0;
}