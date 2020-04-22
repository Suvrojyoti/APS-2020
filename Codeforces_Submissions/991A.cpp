#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,k;
    cin>>a>>b>>c>>d;
    k=d-(a+b-c);
    if(k>=1&&c<=a&&c<=b)
        cout<<k;
    else
        cout<<"-1";
    return 0;
}