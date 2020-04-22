#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll test,n,a,i,t;
    
    cin>>test;
    while(test--)
    {
        cin>>a;
        for(i=a;i>=1;i--)
        {
            if(a%i==0)
            {
                t=180/i;
                if(t*i==180)
                {
                    if(a/i<=t-2)
                    cout<<t<<endl;
                    else
                    cout<<t*2<<endl;
                    break;
                }
                    
            }
        }
    }
    return 0;
}