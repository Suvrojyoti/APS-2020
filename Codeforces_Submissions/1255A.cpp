#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;
int main()
{
    ll test,a,b,i,j;
    cin>>test;
    while (test--)
    {
        ll cnt=0;
        cin>>a>>b;
        if(b<a)
            swap(a,b);
        j=b-a;
        cnt+=j/5;
        j=j%5;
        cnt+=j/2;
        j=j%2;
        cnt+=j;
        cout<<cnt<<endl;

    }
    return 0;
    
}