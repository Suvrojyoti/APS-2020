#include<bits/stdc++.h> 
using namespace std;
int main() 
{ 
    long long int n,i,j,h[600000]={0},cnt,t,sum=0,flag;
    char arr[600000];
    map<long long int, long long int> mp;
    map<long long int, long long int>::iterator itt;
    string temp;
    set<string> myset;
    set<long long int> st;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr;
        myset.insert(arr); 
    }
    
      
    // using begin() to print set 
    for (auto it=myset.begin(); it != myset.end(); ++it)
    {
        //cout << ' ' << *it; 
        flag=0;
        temp=*it;
        cnt=0;
        for(i=0;temp[i]!='\0';i++)
        {
            if(cnt==0&&temp[i]==')'&&i!=0)
            {
                flag=1;
            }
            if(temp[i]=='(')
                cnt++;
            else
                cnt--;
        }
        if(flag==0)
        {
        itt=mp.find(cnt);
        if(itt==mp.end())
        mp.insert(pair<long long int,long long int>(cnt, 1));
        else
        {
            t=itt->second;
            mp.erase(cnt);
            mp.insert(pair<long long int,long long int>(cnt, ++t));
        }
        }
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        t=it->first;
        //cout<<it->first<<" "<<it->second<<"\n";
        if(st.find(t)==st.end())
        {
            st.insert(t);
            st.insert(t*(-1));
            itt=mp.find(t*(-1));
            if(itt!=mp.end())
            {
                if(it->first!=0)
                sum+=it->second*itt->second;
                else
                sum+=it->second/2;
            }
        }
    }
    cout<<sum;
    return 0; 
}