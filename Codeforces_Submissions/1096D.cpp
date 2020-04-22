#include <iostream>
using namespace std;
long long a, b, c, d;
int n;
string s;
int main()
{
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        if (s[i]=='h') a+=x;
        else if (s[i]=='a') b=min(a,b+x);
        else if (s[i]=='r') c=min(b,c+x);
        else if (s[i]=='d') d=min(c,d+x);
    }
    cout<<d;
    return 0;
}