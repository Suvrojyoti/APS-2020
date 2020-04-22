#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        cout<<(1<<n);
    }
    else
        cout<<"0";
    return 0;
}