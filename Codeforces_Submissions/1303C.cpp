#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector <ll> v[30];
bool vis[30];
set <char> st;
void dfs(ll a)
{
    if(vis[a])
        return;
        
    vis[a]=1;
    char c=a+'a';
    st.insert(c);
    cout<<c;
    for(auto it:v[a])
    {
        if(!vis[it])
            dfs(it);
    }
    
}
int main() 
{
    ll test,n,i,j,a,b;
    cin>>test;
    while(test--)
    {
        string s;
        st.clear();
        cin>>s;
        for(i=0;i<27;i++)
            v[i].clear();
        if(s.length()<=2)
        {
            for(auto it:s)
                st.insert(it);
            cout<<"YES\n"<<s;
            for(i=0;i<26;i++)
            {
                char c='a'+i;
                if(st.find(c)==st.end())
                    cout<<c;
            }
            cout<<endl;
            continue;
        }
        n=s.length();
        for(i=1;i<n;i++)
        {
            a=s[i]-'a',b=s[i-1]-'a';
            if(find (v[a].begin(), v[a].end(), b)==v[a].end())
                v[a].pb(b);
            if(find (v[b].begin(), v[b].end(), a)==v[b].end())
                v[b].pb(a);
        }
        ll cnt=0,flag=0,src;
        for(i=0;i<26;i++)
        {
            if(v[i].size()==1)
            {
                cnt++;
                src=i;
            }
            else if(v[i].size()>2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1 or cnt!=2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        memset(vis,0,sizeof(vis));
        cout<<"YES\n";
        dfs(src);
        
        for(i=0;i<26;i++)
        {
            char c='a'+i;
            if(st.find(c)==st.end())
                cout<<c;
        }
        cout<<endl;
        
    }
    return 0;
}