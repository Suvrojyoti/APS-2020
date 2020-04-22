#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define se second
#define fi first
#define MOD 1000000007
// #define
using namespace std;

const ll INF = 1e18L + 5;
string s;
char find_this(ll i)
{
    char f[3]={'a','b','c'};
    for(ll j=0;j<3;j++)
    {
        if(f[j]!=s[i-1]&&f[j]!=s[i+1])
            return f[j];
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
   ll n,i,j,a[5],test;
   
   cin>>test;
   while(test--)
   {
       cin>>s;
       if(s.length()==1)
       {
           if(s[0]=='?')
            cout<<'a'<<endl;
           else
           {
               cout<<s<<endl;
           }
           continue;
           

       }
       else
       {
           
       
       
       if(s[0]=='?')
        if(s[1]=='a')
            s[0]='b';
        else
        {
            s[0]='a';
        }
        
       for(i=1;i<s.length()-1;i++)
       {
           if(s[i]=='?')
           {
               s[i]=find_this(i);
           }
       }
       if(s[s.length()-1]=='?')
       {
           if(s[s.length()-2]=='a')
            s[s.length()-1]='b';
            else
            {
                /* code */
                s[s.length() - 1] = 'a';
            }
            
       }
       bool flag=0;
       for(i=0;i<s.length()-1;i++)
       {
           if(s[i]==s[i+1])
            flag=1;
       }
       if(flag)
        cout<<"-1\n";
       else
       {
           cout<<s<<endl;
       }
       }
        
   }
   return 0;
}