#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
 
 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   ios::sync_with_stdio(false);
   cin.tie(0);
   ll n,i,j;
   ll arr[100005],arr1[100005];
   queue <ll> q,q1;
   set <ll> s;
   cin>>n;
   ll temp;
   for(i=0;i<n;i++)
   {
       cin>>temp;
       q.push(temp);
   }
   for (i = 0; i < n; i++)
   {
       cin >> temp;
       q1.push(temp);
   }
   ll cnt=0;
   while(!q.empty()&&!q1.empty())
   {
       ll f=q.front();
       ll f1=q1.front();
       if(f==f1)
       {
           q.pop();
           q1.pop();
       }
       else
       {
           if(s.find(f)!=s.end())
               q.pop();
           else
           {
               s.insert(f1);
               q1.pop();
               cnt++;
           }
          
       }
      
   }
   cout << cnt;
   return 0;
}