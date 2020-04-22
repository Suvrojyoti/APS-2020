#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll square(ll a,ll b,ll x,ll y)
{
    if(x<a||y<b)
        return 0;
    return 1LL*(x-a)*(y-b);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll arr[2][2],arr1[2][2],arr2[2][2],i,j,arr3[2][2],arr4[2][2];
    cin>>arr[0][0]>>arr[0][1]>>arr[1][0]>>arr[1][1];
    cin >> arr1[0][0] >> arr1[0][1] >> arr1[1][0] >> arr1[1][1];
    cin >> arr2[0][0] >> arr2[0][1] >> arr2[1][0] >> arr2[1][1];
    ll x,y,a,b;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==0)
            {
                x=max(arr[i][0],arr1[i][0]);
                y=max(arr[i][1],arr1[i][1]);
            }
            else
            {
                a = min(arr[i][0], arr1[i][0]);
                b = min(arr[i][1], arr1[i][1]);
            }
            
        }
    }
    arr3[0][0]=x;
    arr3[0][1]=y;
    arr3[1][0]=a;
    arr3[1][1]=b;
    ll f=square(x,y,a,b);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == 0)
            {
                x = max(arr[i][0], arr2[i][0]);
                y = max(arr[i][1], arr2[i][1]);
            }
            else
            {
                a = min(arr[i][0], arr2[i][0]);
                b = min(arr[i][1], arr2[i][1]);
            }
        }
    }
    arr4[0][0] = x;
    arr4[0][1] = y;
    arr4[1][0] = a;
    arr4[1][1] = b;
    f  = f+square(x, y, a, b);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == 0)
            {
                x = max(arr3[i][0], arr4[i][0]);
                y = max(arr3[i][1], arr4[i][1]);
            }
            else
            {
                a = min(arr3[i][0], arr4[i][0]);
                b = min(arr3[i][1], arr4[i][1]);
            }
        }
    }
    // cout << f << " " << square(x, y, a, b)<<endl;
    f  =f- square(x, y, a, b);
    ll k = square(arr[0][0], arr[0][1], arr[1][0], arr[1][1]);
    // cout<< f <<" "<<k<<endl;
    if (f >= square(arr[0][0], arr[0][1], arr[1][0], arr[1][1]))
                  cout
           << "NO";
    else
    {
        cout<<"YES";
    }
    return 0;
}