#include <iostream>

using namespace std;
int main()
{
    long long int n,v,i,cnt,c;
    cin>>n>>v;
    if(v>=n-1)
        cout<<n-1;
    else
    {
        cnt=v;
        c=v;
        for(i=1;i<n;i++)
        {
            if(cnt>=n-i)
                break;
            if(cnt<v)
            {
                cnt=v;
                c+=i;
                //cout<<c<<" ";
            }
            cnt--;
        }
        cout<<c;
    }
    return 0;
}