#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n,sum=0,i;
    char c;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>c;
        if(c=='-')
            sum--;
        else
            sum++;
        if(sum<0)
            sum=0;
    }
    cout<<sum;
    return 0;
}