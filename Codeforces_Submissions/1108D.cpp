#include<bits/stdc++.h> 
using namespace std;
int main()
{
   long long int n,i,j,sum=0;
   char arr[200000];
   string str;
   stack <char> s;
   cin>>n;
   for(i=0;i<n;i++)
    cin>>arr[i];
   s.push(arr[0]);
   str=arr[0];
   for(i=1;i<n;i++)
   {
       
       if(arr[i]==s.top())
       {
           sum++;
           if(i<n-1)
           {
           if(arr[i]=='R'&&arr[i+1]=='G')
           {
            str+="B";
            s.push('B');
           }
           else if(arr[i]=='R')
           {
            str+="G";
            s.push('G');
           }
          else if(arr[i]=='G'&&arr[i+1]=='R')
          {
            str+="B";
            s.push('B');
          }
          else if(arr[i]=='G')
          {
            str+="R";
            s.push('R');
          }
          else if(arr[i]=='B'&&arr[i+1]=='G')
          {
            str+="R";
            s.push('R');
          }
         else if(arr[i]=='B')
         {
            str+="G";
            s.push('G');
         }
           }
           else
           {
            if(arr[i]=='R')
            str+="G";
           else if (arr[i]=='B')
            str+="G";
          else
            str+="R";
           }
       }
       else
       {
       s.push(arr[i]);
       str+=arr[i];
       }
       }
       cout<<sum<<"\n";
       cout<<str;
      
      return 0;     
       
   }