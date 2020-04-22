#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a!=0)
    cout<<(a==d);
    else if(d==0&&c==0)
        cout<<"1";
    else
        cout<<"0";
}