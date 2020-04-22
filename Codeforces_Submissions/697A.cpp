#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,diff,flag=0;
    cin>>a>>b>>c;
    if(c<b)
    {
        if(a==b)
            cout<<"NO\n";
        else
            cout<<"YES\n";
            
        flag=1;
    }
    diff=c-a;
    if(flag==0)
    {
    if(diff%c==0||diff%c==1)
        cout<<"YES\n";
    else
        cout<<"NO \n";
    }
    return 0;
}