#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;


bool cmp(pair<string , pair<int,char> > p , pair<string , pair<int,char> > q)
{
    if(p.second.second == q.second.second)
        return p.second.first < q.second.first;

    return p.second.second < q.second.second;
}
bool compare(pair<string , pair<int,char> > p , pair<string , pair<int,char> > q)
{
    return p.second.first < q.second.first;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<pair<string , pair<int,char> > > vec,ve;
    string s[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> s[i];
        int cc=0;
        for(int j=0 ; j<s[i].length() ; j++)
        {
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='o' || s[i][j]=='i' || s[i][j]=='u')
                cc++;
        }
        for(int j=s[i].length()-1 ; j>=0 ; j--)
        {
            if(s[i][j]=='a' || s[i][j]=='e' || s[i][j]=='o' || s[i][j]=='i' || s[i][j]=='u')
            {
               vec.push_back({s[i],{cc,s[i][j]}});
               break;
            }
        }
    }

    sort(vec.begin(),vec.end(),cmp);
    vector<pair<string,string> > v,v1;
    //map<string,bool> mp;
    int vis[n]={0};

    for(int i=1 ; i<vec.size() ; i++)
    {
        if(vec[i].second.second == vec[i-1].second.second && vec[i].second.first == vec[i-1].second.first)
        {
              v.push_back({vec[i].first,vec[i-1].first});
              //mp[vec[i].first] = true;
              //mp[vec[i-1].first] = true;
              vis[i]=1;
              vis[i-1]=1;
              i++;
        }
    }
   // cout << endl;
   // for(int i=0 ; i<v.size() ; i++)
   //     cout << v[i].first << " " << v[i].second << endl;
   // cout << endl;

    for(int i=0 ; i<vec.size() ; i++)
    {
       if(vis[i]==0)
         ve.push_back(vec[i]);
    }

    sort(ve.begin(),ve.end(),compare);

    //cout << endl;
    //for(int i=0 ; i<ve.size() ; i++)
     //   cout << ve[i].first << " " << ve[i].second.first << " " << ve[i].second.second << endl;
     //   cout <<endl;

     for(int i=1 ; i<ve.size() ; i++)
    {
        if(ve[i].second.first == ve[i-1].second.first)
        {
              v1.push_back({ve[i].first,ve[i-1].first});
              i++;
        }
    }

  //  cout << endl;
   // for(int i=0 ; i<v1.size() ; i++)
    //    cout << v1[i].first << " " << v1[i].second << endl;
   // cout << endl;


      if(v1.size()>=v.size())
      {
          cout << v.size()<<endl;
          for(int i=0 ; i<v.size() ; i++)
          {
              cout << v1[i].first << " " << v[i].first<<endl;
              cout << v1[i].second << " " << v[i].second<<endl;
          }
          return 0;
      }
      else
      {
          cout << v1.size() + ((int)(v.size() - v1.size())/2)<<endl;
          for(int i=0 ; i<v1.size() ; i++)
          {
              cout << v1[i].first << " " << v[i].first<<endl;
              cout << v1[i].second << " " << v[i].second<<endl;
          }
          for(int i=v1.size() ; i<v.size() ; i=i+2)
          {
              if(i+1 < v.size())
              {
                  cout << v[i].first << " " << v[i+1].first<<endl;
                  cout << v[i].second << " " << v[i+1].second<<endl;
              }
              else
                return 0;
          }
      }
    return 0;
}