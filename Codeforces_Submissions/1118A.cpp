#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int q,n,c,p,cost;
    cin>>q;
    while(q--)
    {
        cost=0;
        cin>>n>>c>>p;
        if(2*c<=p)
            cout<<n*c<<"\n";
        else
        {
            cost+=p*(n/2);
            if(n%2==0)
                cout<<cost<<"\n";
            else    
                cout<<cost+c<<"\n";
        }
    }
    return 0;
}