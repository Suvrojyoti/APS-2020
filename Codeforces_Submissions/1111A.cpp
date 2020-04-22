#include<bits/stdc++.h> 
using namespace std;
int main()
{
    string s,s1;
    long int i,v,v1,c,c1,flag=0;
    v=v1=c=c1=0;
    cin>>s>>s1;
    //cout<<s<<s1;
    if(s.size()==s1.size())
    {
    for(i=0;i<s.size();i++)
    {
       // cout<<"i";
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        {
         if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='o'&&s1[i]!='i'&&s1[i]!='u')
        {
            flag=1;
            //cout<<i<<"1";
            break;
            
        }
        }
        else if(s1[i]=='a'||s1[i]=='e'||s1[i]=='o'||s1[i]=='i'||s1[i]=='u')
        {
            if(s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u')
        {
            flag=1;
            //cout<<i<<"2";
            break;
        }
        }
    }
    
    
    if(flag==0)
        cout<<"Yes";
    else
        cout<<"No";
    }
    else
        cout<<"No";
    return 0;
}