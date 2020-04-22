#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,arr[1000],h[100000]={0},final[100][100],flag=0,flag1=0,k,t;
    cin>>n;
    k=n;
    
    for(i=0;i<n*n;i++)
    {
        cin>>arr[i];
        
    }
    
    t=1;
    for(i=0;i<n*n;i++)
    {
        h[arr[i]]++;
        
    }
    //for(i=0;i<20;i++)
      //  cout<<i<<" "<<h[i]<<" ";
    //cout<<n;
    for(j=0;j<n/2;j++)
    {
    for(i=0;i<n/2;i++)
    {
        flag=0;
        for(k=0;k<=1000;k++)
        {
            
            if(h[k]%4==0&&h[k]>0||(h[k]-1)%4==0&&h[k]-1>0||(h[k]-2)%4==0&&h[k]-2>0)
            {
                final[j][i]=final[j][n-1-i]=final[n-1-j][i]=final[n-1-j][n-1-i]=k;
                h[k]=h[k]-4;
                flag=1;
                break;
            }
            
            
            
        }
        if(flag==0)
        {
            cout<<"no";
            exit(0);
        }
        
    }
   /* for(i=0;i<=10;i++)
                cout<<h[i]<<" ";
            cout<<"\n";*/
    
    }
    
    if(n%2==0)
    {
        cout<<"yes\n";
       for(i=0;i<n;i++)
       {
        for(j=0;j<n;j++)
            cout<<final[i][j]<<" ";
        cout<<"\n";
       }
    }
    else
    {   k=n;
        /*for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    cout<<final[i][j]<<" ";
                cout<<"\n";
            }*/
        flag1=1;
        for(i=0;i<=1000;i++)
        {
            if(h[i]%2==1&&h[i]>0)
            {
               // cout<<i<<"\n";
                final[n/2][n/2]=i;
                h[i]--;        
                flag1=0;
                break;
            }
        }
        /* for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    cout<<final[i][j]<<" ";
                cout<<"\n";
            }*/
        if(flag1==1)
        {
            cout<<"no";
            exit(0);
        }
            for(i=0;i<n/2;i++)
            {
                flag=0;
                if(i!=n/2)
                {
                for(j=0;j<=1000;j++)
                {
                    
                    if(h[j]%2==0&&h[j]>0)
                    {
                        final[i][k/2]=j;
                        final[n-1-i][k/2]=j;
                        h[j]=h[j]-2;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"no";
                    exit(0);
                }
                }
            }
           /* for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    cout<<final[i][j]<<" ";
                cout<<"\n";
            }*/
            
            k=n;
           
                for(i=0;i<n/2;i++)
            {
                flag=0;
                if(i!=n/2)
                {
                for(j=1;j<=1000;j++)
                {
                    
                    if(h[j]%2==0&&h[j]>0)
                    {
                        final[k/2][i]=j;
                        final[k/2][n-1-i]=j;
                        h[j]=h[j]-2;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"no";
                    exit(0);
                }
                }
            }
            cout<<"yes\n";
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    cout<<final[i][j]<<" ";
                cout<<"\n";
            }
                
    }
    return 0;
}