#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,t,i,flag=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(n<11)
            cout<<"NO";
        else
        {
            i=0;
            while(s[i]!='8'&&i<n)
                i++;
            if(n-i<11)
                cout<<"NO";
            else
                cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}