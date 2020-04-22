#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;


int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

ll test,n,i,j,k;
cin>>test;
while(test--)
{
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    j=0;i=0,k=0;
    while(i<n)
    {
        if(j==0)
        {
        if(s[i]=='1'||s[i]=='2')
        {
            if(k==1)
                break;
            i++;
            k=0;
        }
        else
        {
            if(j==0)
            {
                if(k==0)
                {
                    j++;
                    k=1;
                }
                else
                {
                    i++;
                    k=0;
                }
            }
            else
            {
                if(k==0)
                {
                    j--;
                    k=1;
                }
                else
                {
                    i++;
                    k=0;
                }
            }
                
        }
        }
        else
        {
            if(s1[i]=='1'||s1[i]=='2')
        {
            if(k==1)
                break;
            i++;
            k=0;
        }
        else
        {
            if(j==0)
            {
                if(k==0)
                {
                    j++;
                    k=1;
                }
                else
                {
                    i++;
                    k=0;
                }
            }
            else
            {
                if(k==0)
                {
                    j--;
                    k=1;
                }
                else
                {
                    i++;
                    k=0;
                }
            }
                
        }
            
        }
            
    }
    if(i==n&&j==1)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
    
}
return 0;
}