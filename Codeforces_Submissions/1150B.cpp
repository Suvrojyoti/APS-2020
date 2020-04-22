#include <bits/stdc++.h> 
#define pb push_back
using namespace std;

int main() {
   long long int n,i,j,flag=0;
   char arr[100][100];
   cin>>n;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(arr[i][j]=='.')
           {
               if(i+2<n&&j-1>-1&&j+1<n)
               {
                   if(arr[i+1][j]!='.'||arr[i+2][j]!='.'||arr[i+1][j-1]!='.'||arr[i+1][j+1]!='.')
                   {
                       cout<<"NO";
                       flag=1;
                       exit(0);
                       break;
                   }
                   else
                   {
                       arr[i][j]='#';
                       arr[i+1][j]='#';
                       arr[i+2][j]='#';
                       arr[i+1][j+1]='#';
                       arr[i+1][j-1]='#';
                       
                   }
               }
               else
               {
                   cout<<"NO";
                   flag=1;
                   exit(0);
                   break;
               }
           }
       }
   }
   if(flag==0)
    cout<<"YES";
   return 0;
}