#include<bits/stdc++.h> 
using namespace std; 
#define ll long long int
const ll inf = 100000000000000000;

int main()
{
   ll n,i,j;
   string s;
   cin>>n>>s;
   ll arr[10]={0};
   for(i=0;i<s.length();i++)
   {
       if(s[i]=='L')
       {
           j=0;
           while(arr[j]!=0)
            j++;
           arr[j]=1;
       } 
       else if(s[i]=='R')
       {
           j=9;
           while(arr[j]!=0)
            j--;
            arr[j]=1;
       }
       else
       {
           arr[s[i]-'0']=0;
       }
   }
   for(i=0;i<10;i++)
    cout<<arr[i];
    return 0;
}