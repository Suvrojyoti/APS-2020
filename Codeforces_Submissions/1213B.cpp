#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll test,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        stack <ll> s;
        ll i,sum=0;
        s.push(-1);
        for(i=0;i<n;i++)
        {
            ll temp;
            cin>>temp;
            while(s.top()>temp)
            {
                sum++;
                s.pop();
            }
            s.push(temp);

        }
        cout<<sum<<endl;
    }
    return 0;
}