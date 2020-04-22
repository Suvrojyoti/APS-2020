#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MOD 1000000007
using namespace std;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
    int R, G, B;
    cin >> R >> G >> B;
    int option1 = (R + G + B) / 2;
    int option2 = R + G + B - max({R, G, B});
    cout << min(option1, option2) << endl;
    }
    return 0;
}