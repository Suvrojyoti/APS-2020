#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int f=0,b,s,o=0,z=0,i,x;
    char b1,s1;
    cin>>z>>o>>x;
    if(o>z)
    {
       b=o;
       s=z;
       b1='1';
       s1='0';
    }
    else
    {
        b=z;
        s=o;
        b1='0';
        s1='1';
    }
    for(i=x;i>1;i--)
    {
        if(f%2==0)
        {
            cout<<b1;
            b--;
        }
        else
        {
            cout<<s1;
            s--;
        }
        
        f++;
    }
    if(f%2==1)
    {
        while(s--)
            cout<<s1;
        while(b--)
            cout<<b1;
    }
    else
     {
        while(b--)
            cout<<b1;
        while(s--)
            cout<<s1;
    }
    return 0;
}