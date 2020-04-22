#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,temp,i,j,xr=0,arr[505][505];
    set <int> s[505];
    vector <int> v;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
            s[i].insert(arr[i][j]);
        }
        xr=xr^*(s[i].begin());
        v.push_back(*(s[i].begin()));
    }
    if(xr==0)
    {
        bool flag=0;
        for(i=0;i<n;i++)
        {
            if(s[i].size()>1)
            {
                auto itr=s[i].begin();
                itr++;
                int k=0;
                for(auto it:s[i])
                {
                    if(k==2)
                        break;
                    v[i]=it;
                    
                }
                //cout<<itr;
                //v[i]=(itr);
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"NIE";
        else
        {
            cout<<"TAK"<<endl;
            i=0;
            for(auto itr:v)
            {
                for(j=0;j<m;j++)
                {
                    if(arr[i][j]==itr)
                    {
                        cout<<j+1<<" ";
                        j=m;
                    }
                }
                i++;
               
            }
        }
    }
    else
        {
            cout<<"TAK"<<endl;
            i=0;
            for(auto itr:v)
            {
                for(j=0;j<m;j++)
                {
                    if(arr[i][j]==itr)
                    {
                        cout<<j+1<<" ";
                        j=m;
                    }
                }
               i++;
            }
        }
    return 0;
}