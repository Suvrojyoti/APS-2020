#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds; 

typedef tree<long long int, null_type, less_equal<long long int>, rb_tree_tag, 
             tree_order_statistics_node_update> 
    new_data_set; 

int main()
{
    
    long long test,n,sum=0,i,t,m;
    cin>>n>>m;
    
        new_data_set p;
        sum=0;
        
        for(i=0;i<n;i++)
        {
            cin>>t;
            p.insert(t);
            
            //cout<<p.order_of_key(t)<<" ";
        }
        for(i=0;i<m;i++)
        {
            cin>>t;
            cout<<p.order_of_key(t+1)<<" ";
        }
    
    return 0;

}