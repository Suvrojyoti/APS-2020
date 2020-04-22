#include<bits/stdc++.h> 
using namespace std;


int main() 
{
    long long int n,i,t=0;
    char arr[1000000];
    stack <long long int> s;
    cin>>arr;
    for(i=0;arr[i]!='\0';i++)
    {
        if(!s.empty())
        {
            if(s.top()==arr[i])
            {
                s.pop();
                t++;
            }
            else
                s.push(arr[i]);
                
        }
        else
            s.push(arr[i]);
    }
    if(t%2==0)
        cout<<"No";
    else
        cout<<"Yes";
    return 0;
}