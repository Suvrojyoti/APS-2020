#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,test,n1,f,flag,f1,len;
    cin>>test;
    char c;
    while(test--)
    {
        //cout<<test;
        string s,s1;
        flag=0;
        cin>>s>>s1;
        n=s.length();
        n1=s1.length();
        
        if(n1<n)
        {
            cout<<"NO\n";
            flag=1;
            continue;
        }
        i=j=0;
        while(i<n)
        {
            f=i;
            f1=j;
            len=1;
            //cout<<s.substr(f,i)<<" "<<s1.substr(f1,j)<<"\n";
            while(s[i]==s[i+1]&&i+1<n)
            {
                i++; j++;
                len++;
            }
            if(s.substr(f,len)!=s1.substr(f1,len)||j>=n1)
            {
                //cout<<"NO\n";
                //cout<<s.substr(f,i)<<" "<<s1.substr(f1,j)<<"\n";
                flag=1;
                break;
            }
            while(s1[j]==s1[j+1]&&j+1<n1)
                j++;
            i++;
            j++;
        }
       //cout<<i<<" "<<j<<"\n";
        while(j+1<n1)
        {
            if(s1[j+1]!=s1[j])
            {
                flag=2;
                //cout<<j<<" ";
                break;
            }
            j++;
        }
        if(s[i-1]!=s1[j]&&j<n1)
            flag=1;
        if(!flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";//flag<<"\n";
    }
        
    return 0;
}