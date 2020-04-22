#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;
    cin>>test;
    while(test--)
    {
        set <char> s,s1,intersect;
        string str;
        vector <ll> v;
        cin>>str;
        for(auto it:str)
            s.insert(it);
        cin>>str;
        for (auto it : str)
            s1.insert(it);
        set_intersection(s1.begin(), s1.end(), s.begin(), s.end(), inserter(intersect, intersect.begin()));
        if(intersect.size())
            cout<<"yes";
        else
            cout<<"no";
        cout<<endl;
    }
    return 0;
}