#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll inf=1000000009;
int main()
{
    ll n,mat[102][102],i,j,flag=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        
        for(j=1;j<=n;j++)
        {
            if(s[j-1]=='1')
            mat[i][j]=1;
            else
            mat[i][j]=0;
            //cout<<mat[i][j]<<" ";
            if(i!=j&&mat[i][j]==0)
            {
                mat[i][j]=inf;
                flag=0;
            }
           // cout<<mat[i][j]<<" ";
        }
        //cout<<endl;
    }

    ll m;
    cin>>m;
   // cout<<m<<endl;
    ll arr[m];
    for(i=0;i<m;i++)
        cin>>arr[i];
    ll k;   
    for (k = 1; k <= n; k++)  
    {  
        // Pick all vertices as source one by one  
        for (i = 1; i <= n; i++)  
        {  
            // Pick all vertices as destination for the  
            // above picked source  
            for (j = 1; j <= n; j++)  
            {  
                // If vertex k is on the shortest path from  
                // i to j, then update the value of mat[i][j]  
                if (mat[i][k] + mat[k][j] < mat[i][j])  
                    mat[i][j] = mat[i][k] + mat[k][j];  
            }  
        }  
    }
 
    vector<ll> final;
    final.push_back(0);
    for(i=1;i<m;i++)
    {
        if(mat[arr[*final.rbegin()]][arr[i]]!=i-*final.rbegin())
            final.push_back(i-1);
    }
    final.push_back(m-1);
    cout<<final.size()<<endl;
    for(auto it:final)
        cout<<arr[it]<<" ";
   
    return 0;

}