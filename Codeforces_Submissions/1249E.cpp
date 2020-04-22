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
ll n,c,arr[200005],arr1[200005],i,j,curs,cure,prev;
cin>>n>>c;
bool flag=0;
for(i=0;i<n-1;i++)
    cin>>arr[i];
for (i = 0; i < n-1; i++)
    cin >> arr1[i];
arr[i]=arr1[i]=0;
curs=cure=prev=0;
for(i=0;i<n;i++)
{
   if(!flag)
   {
       if(cure+c<=curs)
       {
           curs=cure+c;
           cure+=c;
           flag=1;
       }
       else if(curs<cure)
       {
           cure=curs;
       }
       cout << curs << " ";
   }
   else
   {
       if(curs+c<cure)
       {
           cure=curs;
           cout<<cure<<" ";
           flag = 0;
       }
       else if(curs<cure)
       {
           cout<<curs<<" ";
           
       }
       else
       {
           cout<<cure<<" ";
           curs=cure;
           
       }
       
   }

   //cout << "|| curs :" << curs << " cure: " << cure << " flag: " << flag << " arr " << arr[i] << " arr1 " << arr1[i] << endl;
   curs+=arr[i];
   cure+=arr1[i];
   
}
//cout<<min(curs,cure);
return 0;
}