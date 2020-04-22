#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    long long int n,i,t=0,arr[100005],t1=0,t2=0;
    double a[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
      //  cout<<floor(a[i])<<" ";
         t2+=floor(a[i]);
        
    }
    t=abs(0-t2);
  //  cout<<endl<<t<<" ";
    for(i=0;i<n;i++)
    {
        if(floor(a[i])!=ceil(a[i]))
         {
             if(t!=0)
             {
                t2=ceil(a[i]);
                if(t2==0)
                    cout<<"0";
                else
                    cout<<t2;
                t--;
                 
             }
             else
             {
                 t2=floor(a[i]);
                 if(t2==0)
                    cout<<"0";
                 else
                    cout<<t2;
             }
                //cout<<
         }
         else
         {
             t2=ceil(a[i]);
                 if(t2==0)
                    cout<<"0";
                 else
                    cout<<t2;
         }
        // cout<<ceil(a[i]);
         cout<<endl;
        
    }
    return 0;
}