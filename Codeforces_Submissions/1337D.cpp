#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define rep(i, l, r) for (ll i = (ll)(l); i < (ll)(r); i++)
using namespace std;
#define inf 5*1e18

ll getClosest(ll val1, ll val2, ll target) 
{ 
    if (target - val1 >= val2 - target) 
        return val2; 
    else
        return val1; 
} 
 
ll findClosest(vector<ll> &arr, ll n, ll target) 
{ 
    // Corner cases 
    if (target <= arr[0]) 
        return arr[0]; 
    if (target >= arr[n - 1]) 
        return arr[n - 1]; 
  
    // Doing binary search 
    ll i = 0, j = n, mid = 0; 
    while (i < j) { 
        mid = (i + j) / 2; 
  
        if (arr[mid] == target) 
            return arr[mid]; 
  
        /* If target is less than array element, 
            then search in left */
        if (target < arr[mid]) { 
  
            // If target is greater than previous 
            // to mid, return closest of two 
            if (mid > 0 && target > arr[mid - 1]) 
                return getClosest(arr[mid - 1], 
                                  arr[mid], target); 
  
            /* Repeat for left half */
            j = mid; 
        } 
  
        // If target is greater than mid 
        else { 
            if (mid < n - 1 && target < arr[mid + 1]) 
                return getClosest(arr[mid], 
                                  arr[mid + 1], target); 
            // update i 
            i = mid + 1;  
        } 
    } 
  
    // Only single element left after search 
    return arr[mid]; 
} 


ll calc(ll a,ll b,ll c)
{
    ll ans=(a-b)*(a-b)+(b-c)*(b-c)+(c-a)*(c-a);
    return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
ll test,n,i,j,k,a,b,c,temp;
cin>>test;
while(test--)
{
    cin>>a>>b>>c;
    set<ll> s,s1,s2;
    vector <ll> x,y,z;
    for(i=0;i<a;i++)
    {
        cin>>temp;
        s.insert(temp);
        
    }
    for(i=0;i<b;i++)
    {
        cin>>temp;
        s1.insert(temp);
        
    }
    for(i=0;i<c;i++)
    {
        cin>>temp;
        s2.insert(temp);
        
    }
    for(auto it:s)
        x.pb(it);
    for(auto it:s1)
        y.pb(it);
    for(auto it:s2)
        z.pb(it);
    
    ll ans=inf;
    for(auto it:x)
    {
        ll x1=it;
        ll y1=findClosest(y,y.size(),x1);
        ll z1=findClosest(z,z.size(),x1);
        ans=min(ans,calc(x1,y1,z1));
    }
    for(auto it:y)
    {
        ll y1=it;
        ll x1=findClosest(x,x.size(),y1);
        ll z1=findClosest(z,z.size(),y1);
        ans=min(ans,calc(x1,y1,z1));
    }
    for(auto it:z)
    {
        ll z1=it;
        ll x1=findClosest(x,x.size(),z1);
        ll y1=findClosest(y,y.size(),z1);
        ans=min(ans,calc(x1,y1,z1));
    }
    cout<<ans<<endl;
}
return 0;
}