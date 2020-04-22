#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,a,b,i;
    cin>>n;
    a=floor(float((n-1)*1.0/(2*1.0)));
    b=ceil(float((n-1)*1.0/(2*1.0)));
    cout<<max(a,b)+1<<"\n";
    cout<<"1 1\n";
    //n--;
    for(i=1;i<n;i++)
    {
        a=floor(float(i*1.0/(2*1.0)));
        b=ceil(float(i*1.0/(2*1.0)));
        cout<<a+1<<" "<<b+1<<"\n";
    }
    return 0;
}