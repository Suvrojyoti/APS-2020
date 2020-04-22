#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;

ll countSetBits(ll n,ll k)
{
    int x = __builtin_popcount(n);

    // Not-possible condition
    if (k < x || k > n)
    {
        //cout << "-1";
        return 0;
    }
    return 1;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll n,p,i,j;
cin>>n>>p;
ll k=1000;
i=1;
n-=p;
while(k--&&n>=0&&n<=1000000000000)
{
    //cout<<countSetBits(n,i)<<" "<<n<<endl;
    if(countSetBits(n,i))
    {
        cout<<i;
        exit(0);
    }
    i++;
    n -= p;
}
cout<<"-1";
return 0;
}