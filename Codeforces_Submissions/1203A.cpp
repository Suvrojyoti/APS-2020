#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll test,q,n,i,flag;
   cin>>q;
   while(q--)
   {
       cin>>n;
       vector <ll> v(n);
       for(i=0;i<n;i++)
        cin>>v[i];
        vector <ll> v1=v;
        sort(v.begin(),v.end());
        ll pos=min_element(v1.begin(),v1.end())-v1.begin();
        flag=0;
        for(i=0;i<n;i++)
        {
            if(v1[(pos+i)%n]!=v[i])   
            {
                flag++;
                break;
            }
        }
        
        sort(v.begin(),v.end(),greater<ll>());
        pos=max_element(v1.begin(),v1.end())-v1.begin();
        for(i=0;i<n;i++)
        {
            if(v1[(pos+i)%n]!=v[i])   
            {
                flag++;
                break;
            }
        }
        
        if(flag>=2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
   }
   return 0;
}