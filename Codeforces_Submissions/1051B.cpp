#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int l,r,i;
    cin>>l>>r;
    cout<<"YES\n";
    for(i=l;i<r;i=i+2)
    {
        cout<<i<<" "<<i+1<<"\n";
    }
    return 0;
}