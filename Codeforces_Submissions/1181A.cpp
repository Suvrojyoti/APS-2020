#include <iostream>

using namespace std;

int main() 
{
    long long int x,y,z,sum,sum1;
    cin>>x>>y>>z;
    sum=(x/z)+(y/z);
    sum1=(x+y)/z;
    if(sum1>sum)
        cout<<sum1<<" "<<min(z-x%z,z-y%z);
    else
        cout<<sum<<" 0";
    return 0;
}