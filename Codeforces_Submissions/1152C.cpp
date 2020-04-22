#include <bits/stdc++.h>
using namespace std;
long long int lcm( long long int a,long long int b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    long long int a,b,i,j,temp,ans,vl=0,diff;
    vector <long long int> v;
    cin>>a>>b;
    diff=abs(a-b);
    for(i=1;i*i<=diff;i++)
    {
        if(diff%i==0)
        {
            v.push_back(i);
            if(i!=diff/i)
            v.push_back(diff/i);
        }
    }
  //  for(auto it:v)
    //    cout<<it<<" ";
    ans=9999999999999;
    for(auto it=v.begin();it!=v.end();it++)
    {
        if(a%*it==b%*it)
        {
            if(a%*it==0)
            {
                temp=lcm(a,b);
                if(temp<ans)
                {
                    ans=temp;
                    vl=0;
                }
            }
            else
            {
                temp=lcm(a+*it-a%*it,b+*it-b%*it);
                if(temp<ans)
                {
                    ans=temp;
                    vl=*it-a%*it;
                }
            }
           // cout<<temp<<"\n";
            
        }
    }
    cout<<vl;
    return 0;
}