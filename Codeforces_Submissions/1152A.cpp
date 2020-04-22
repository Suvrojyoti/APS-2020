#include <bits/stdc++.h>
using namespace std;
long long int n1,o1,e1,o2,e2,n2,i,t;
int main()
{
    cin>>n1>>n2;
    for(i=0;i<n1;i++)
    {
        cin>>t;
        if(t%2==1)
            o1++;
        else
            e1++;
    }
    for(i=0;i<n2;i++)
    {
        cin>>t;
        if(t%2==1)
            o2++;
        else
            e2++;
    }
    cout<<(min(o1,e2)+min(o2,e1));
    return 0;
}