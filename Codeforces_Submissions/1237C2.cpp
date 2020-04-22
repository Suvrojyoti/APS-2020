#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
struct pts
{
    ll x,y,z,ind;
    bool operator<(const pts &t) const
    {
        if (this->x < t.x)
            return 1;
        else if (this->x == t.x)
        {
            if (this->y < t.y)
                return 1;
            else if (this->y == t.y)
            {
                if (this->z < t.z)
                    return 1;
            }
        }
        return 0;
    }
};

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,i,j,k,a,b,c;
    set <pts> v;
    // map <pts,ll> mp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        pts p;
        cin>>p.x>>p.y>>p.z;
        p.ind=i+1;
        v.insert(p);
        // mp[p]=i;
    }
    //sort(v.begin(),v.end());
    // for(auto it:v)
    //     cout<<it.x<<" "<<it.y<<" "<<it.z<<endl;
    i=0;
    set<ll> s;
    auto it=v.begin();
    while(it!=v.end())
    {
        pts p=*it;
        vector<pts> vec;
        vec.pb(*it);
        it++;
        while(it!=v.end() && it->x==p.x && it->y==p.y)
        {
            vec.pb(*it);
            it++;
        }
       // cout<<vec.size()<<endl;
        if (vec.size() > 1)
        {
            ll bk=vec.size();
            bk-=(bk%2);
            for(i=0;i<bk;i+=2)
            {
                cout<<vec[i].ind<<" "<<vec[i+1].ind<<endl;
                // cout<<vec[i].x<<" "<<vec[i].y<<" "<<vec[i].z<<endl;
                // cout<<vec[i+1].x<<" "<<vec[i+1].y<<" "<<vec[i+1].z<<endl;
                v.erase(v.find(vec[i]));
                v.erase(v.find(vec[i+1]));
            }
           
        }
    }
    // for(auto it:v)
    //     cout<<it.x<<" "<<it.y<<" "<<it.z<<endl;
        
    it=v.begin();
    while(it!=v.end())
    {
        pts p=*it;
        vector<pts> vec;
        vec.pb(*it);
        it++;
        while(it!=v.end() && it->x==p.x )
        {
            vec.pb(*it);
            it++;
        }
       // cout<<vec.size()<<endl;
        if (vec.size() > 1)
        {
            ll bk=vec.size();
            bk-=(bk%2);
            for(i=0;i<bk;i+=2)
            {
                cout<<vec[i].ind<<" "<<vec[i+1].ind<<endl;
                // cout<<vec[i].x<<" "<<vec[i].y<<" "<<vec[i].z<<endl;
                // cout<<vec[i+1].x<<" "<<vec[i+1].y<<" "<<vec[i+1].z<<endl;
                v.erase(v.find(vec[i]));
                v.erase(v.find(vec[i+1]));
            }
           
        }
    }
    
      for(auto it=v.begin();it!=v.end();it++)
      {
        // cout<<it->x<<" "<<it->y<<" "<<it->z<<endl;
        cout<<it->ind<<" ";
        it++;
        cout<<it->ind<<endl;
        // cout<<it->x<<" "<<it->y<<" "<<it->z<<endl;
        // cout<<(it+1)->x<<" "<<(it+1)->y<<" "<<(it+1)->z<<endl;
      }
    
    return 0;
}