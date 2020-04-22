#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test,n,i,c;
    cin>>test;
    while(test--)
    {
        c=0;
        cin>>n;
        while(n%5==0)
        {
            n=n/5;
            c=c+3;
        }
        while(n%3==0)
        {
            n=n/3;
            c=c+2;
        }
        while(n%2==0)
        {
            n=n/2;
            c++;
        }
       // cout<<n<<" ";
        if(n==1)
            cout<<c<<"\n";
        else
            cout<<"-1\n";
            
    }
    return 0;
}