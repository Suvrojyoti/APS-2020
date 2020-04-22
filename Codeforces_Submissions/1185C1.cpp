#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,arr[100000],sum,i,sm;
    multiset<long long int, greater<long long int>> s;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>arr[i];
    sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
        sm=sum;
        //s.insert(arr[i]);
        if(sum<m)
            cout<<"0";
        else
        {
            auto itr=s.begin();
            long long int k=0;
            while(sm>m)
            {
                sm-=*itr;
                itr++;
                k++;
            }
            cout<<k;
        }
        s.insert(arr[i]);
        cout<<"\n";
    }
    return 0;
}