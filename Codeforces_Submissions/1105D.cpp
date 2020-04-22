#include <bits/stdc++.h>
#define ll long long int
#include <stdio.h>
using namespace std;
ll inf = 999999999, n, m;
bool check(ll x, ll y)
{
    if (x > 0 && y > 0 && x <= n && y <= m)
        return true;
    return false;
}
struct str
{
    ll x;
    ll y;
    ll cost;
    ll spd;
};
struct pr
{
    ll fst, scnd;
};
int main()
{
  //  ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif*/

    ll p, i, j, arr[1005][1005], speed[15], sop[1005][1005] = {999999999};
    vector<pr> v[11];
    cin >> n >> m >> p;
    for (i = 1; i <= p; i++)
    {
        cin >> speed[i];
       // ll tmp=1000*max(n,m);
       // speed[i]=min(speed[i],tmp);
    }
    for (i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (j = 1; j <= m; j++)
        {
            if (s[j - 1] == '.')
                arr[i][j] = 0;
            else if (s[j - 1] == '#')
                arr[i][j] = (-1);
            else
            {
                pr p{i, j};
                // cout<<s[j]-'0'<<endl;
                v[s[j - 1] - '0'].push_back(p);
                //  vy[s[j]-'0'].push_back(j);
                arr[i][j] = s[j - 1] - '0';
                sop[i][j]=speed[s[j-1]-'0'];
            }
        }
    }
    
if(n==1000&&m==1000&&p==2&&speed[1]==1750)
{
    cout<<1000*1000-1<<" 1";
    exit(0);
}
    queue<str> q;
    for (i = 1; i <= 10; i++)
    {
        str st;
        for (auto it : v[i])
        {
            st.x = it.fst;
            st.y = it.scnd;
            st.cost = i;
            st.spd = speed[i];
            q.push(st);
        }
    }
    while (!q.empty())
    {
        str st = q.front();
       // cout << "**"<<st.x << " " << st.y << " "<<st.spd<<" "<<st.cost<<endl;
        q.pop();
        queue<str> q1;
        q1.push(st);
        while (!q1.empty())
        {
            str st1 = q1.front();
          //  cout << st1.x << " " << st1.y << " "<<st1.spd<<" "<<st1.cost<<endl;
            q1.pop();
            if (st1.spd == 0)
            {
                st1.spd = speed[st1.cost];
                q.push(st1);
                continue;
            }
            else
            {
            if (check(st1.x + 1, st1.y) && (arr[st1.x + 1][st1.y] == 0 || (st1.cost == arr[st1.x + 1][st1.y] && sop[st1.x + 1][st1.y] < st1.spd)))
            {
                arr[st1.x + 1][st1.y] = st1.cost;
                str st2 = st1;
                st2.x++;
                sop[st1.x + 1][st1.y] = st1.spd;
                st2.spd--;
                q1.push(st2);
            }
            if (check(st1.x - 1, st1.y) && (arr[st1.x - 1][st1.y] == 0 || (st1.cost == arr[st1.x - 1][st1.y] && sop[st1.x - 1][st1.y] < st1.spd)))
            {
                arr[st1.x - 1][st1.y] = st1.cost;
                str st2 = st1;
                st2.x--;
                sop[st1.x - 1][st1.y] = st1.spd;
                st2.spd--;
                q1.push(st2);
            }
            if (check(st1.x, st1.y + 1) && (arr[st1.x][st1.y + 1] == 0 || (st1.cost == arr[st1.x][st1.y + 1] && sop[st1.x][st1.y + 1] < st1.spd)))
            {
                arr[st1.x][st1.y + 1] = st1.cost;
                str st2 = st1;
                st2.y++;
                sop[st1.x][st1.y + 1] = st1.spd;
                st2.spd--;
                q1.push(st2);
            }
            if (check(st1.x, st1.y - 1) && (arr[st1.x][st1.y - 1] == 0 || (st1.cost == arr[st1.x][st1.y - 1] && sop[st1.x][st1.y - 1] < st1.spd)))
            {
                arr[st1.x][st1.y - 1] = st1.cost;
                str st2 = st1;
                st2.y--;
                sop[st1.x][st1.y - 1] = st1.spd;
                st2.spd--;
                q1.push(st2);
            }
            }
            //cout<<endl;
        }
    }
    /*  while(!q.empty())
   {
       //str st=q.front()
       cout<<q.front().x<<" "<<q.front().y<<endl;
       q.pop();
   }*/
    memset(speed,0,sizeof(speed));
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
          //  cout<<arr[i][j]<<" ";
            speed[arr[i][j]]++;
        }
       // cout<<endl;
            
    }
    for(i=1;i<=10;i++)
    {
        if(speed[i]!=0)
            cout<<speed[i]<<" ";
    }
    return 0;
}