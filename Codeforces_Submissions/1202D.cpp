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

    ll test, n, i, x;
    cin >> test;
    while (test--)
    {
        cin >> n;
        ll temp = sqrt(n);
        x = temp + 20000;
        //cout<<temp<<" "<<(x*x-x)/2<<" "<<(temp*temp-temp)/2<<endl;
        while ((x * x - x) / 2 > n)
            x--;
        //cout<<x<<endl;a
        ll m = n - (x * x - x) / 2;
        cout << "133";
        // bool flag=0;
        for (i = 0; i < m; i++)
            cout << "7";
        if (x - 2 >= 0)
        {
            for (i = 0; i < x - 2; i++)
                cout << "3";
            cout << "7";
        }

        cout << "\n";
    }
    return 0;
}