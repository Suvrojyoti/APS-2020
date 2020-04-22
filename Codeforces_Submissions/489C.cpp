#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,s,n,i,t,m1;
    vector <long long int> v,v1;
    cin>>m>>s;
    t=s;
    m1=m;
    if(m==1 && s<10)
        cout<<s<<" "<<s;
    else if(s>9*m||s==0)
        cout<<"-1 -1";
    /*else if(s<m)
    {
        while(m--)
        {
            if(s>m)
            {
                v.push_back(1);
                s--;
            }
            else
                v.push_back(0);
        }
        for(auto itr=v.begin();itr!=v.end();itr++)
            cout<<*itr;
        cout<<" ";
        m=m1;
        s=t;
        v.clear();
        while(m--)
        {
           if(s>9)
           {
            v.push_back(9);
            s=s-9;
           }
           else
           {
               v.push_back(s);
               s=0;
           }
        }
        
        for(auto itr=v.begin();itr!=v.end();itr++)
            cout<<*itr;
    }*/
    else
    {
        while(m--)
        {
           if(s>9)
           {
            v.push_back(9);
            s=s-9;
           }
           else
           {
               v.push_back(s);
               s=0;
           }
        }
        s=t;
        int flag=0;
        while(m1--)
        {
        
            if(s<=9*m1)
            {
                if(!flag)
                {
                    v1.push_back(1);
                    flag=1;
                    s--;
                }
                else
                     v1.push_back(0);
            }
               
            else
            {
                v1.push_back(s-9*m1);
                //cout<<s-9*m1<<" ";
                s=9*m1;
            }
        }
        //cout<<"\n";
        for(auto itr=v1.begin();itr!=v1.end();itr++)
            cout<<*itr;
        cout<<" ";
        for(auto itr=v.begin();itr!=v.end();itr++)
            cout<<*itr;
        
        
    }
    return 0;
}