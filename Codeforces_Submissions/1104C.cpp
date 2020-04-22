#include<bits/stdc++.h> 
using namespace std;


int main() 
{
    long long int n,i,h=0,c=0;
    char arr[1000000];
    cin>>arr;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='0')
        {
            if(c%2==0)
            {
                cout<<"1"<<" "<<"1";
                c+=1;
            }
            else
            {
                c+=1;
            
                cout<<"3 1";
            }
            cout<<"\n";
        }
        else
        {
            if(h%4==0)
                cout<<"1 3";
            else if(h%4==1)
                cout<<"2 3";
            else if(h%4==2)
                cout<<"3 3";
            else
                cout<<"4 3";
            h+=1;
            cout<<"\n";
        }
        
            
        
    }
    return 0;
}