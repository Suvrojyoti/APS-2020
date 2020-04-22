#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,count,test,n;
    cin>>test;
    string arr;
    cin.ignore();
    while(test--)
    {
        getline(cin,arr);
        n=arr.size();
        //cout<<n;
        if(n>10)
        {
            cout<<arr[0]<<n-2;
            cout<<arr[n-1];
        }
        else
        {
            for(i=0;i<n;i++)    
                cout<<arr[i];
        }
        cout<<"\n";        
        
        
    }
    return 0;
}