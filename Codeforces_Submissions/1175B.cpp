#include <bits/stdc++.h>

using namespace std;

int main() 
{
    unsigned long long int n,sum=0,i,t,arr[100050],cnt=0,j,k,f=1;
    unsigned long long int o=pow(2,32)-1;
    //cout<<o;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        //cout<<s<<"\n";
        if(s[0]=='a')
        {
           // t=1;
            sum+=f;
            
        }
        else if(s[0]=='f')
        {
            cin>>k;
            //cout<<k;
            if(f>o)
                k=1;
            f=f*k;
            arr[cnt]=k;
            cnt++;
        }
        else if(s[0]=='e')
        {
            cnt--;
            f=f/arr[cnt];
            //cout<<f<<"\n";
            
        }
        if(sum>o)
        {
            cout<<"OVERFLOW!!!";
            exit(0);
        }
        //cout<<arr[cnt]<<"\n";
    }
    cout<<sum;
    return 0;
}