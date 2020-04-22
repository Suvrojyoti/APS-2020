#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    if(max(a,b)>min(a,b)+c)
    {
        if(max(a,b)==a)
            cout<<"+";
    else
        cout<<"-";
    }
    else if(c==0)
    {
        if(a>b)
            cout<<"+";
        else if(b>a)
            cout<<"-";
        else 
            cout<<"0";
    }
    else
        cout<<"?";
    return 0;
    
}