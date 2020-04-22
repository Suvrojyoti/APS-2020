#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,m,a,h,v;
    cin>>n>>m>>a;
    if(n%a==0)
        v=n/a;
    else
    {
        v=n/a;
        v++;
    }
    if(m%a==0)
        h=m/a;
    else
    {
        h=m/a;
        h++;
    }
    cout<<h*v;
    return 0;
}