#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==0)
    {
        cout<<"1";
        exit(0);
    }
    if(n%4==0)
        cout<<"6";
    else if(n%4==3)
        cout<<"2";
    else if(n%4==2)
        cout<<"4";
    else
        cout<<"8";
    return 0;
}