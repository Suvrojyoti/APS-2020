#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
   double l,h;
   cin>>h>>l;
   cout<<setprecision(12)<<float((l*l*1.0-h*h*1.0)/(2*1.0*h));
   return 0;
}