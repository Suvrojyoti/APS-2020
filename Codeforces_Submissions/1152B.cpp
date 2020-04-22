#include <bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) 
{ 
    string result = ""; // Initialize result 
    int s = 0;          // Initialize digit sum 
  
    // Travers both strings starting from last 
    // characters 
    int i = a.size() - 1, j = b.size() - 1; 
    while (i >= 0 || j >= 0 || s == 1) 
    { 
        // Comput sum of last digits and carry 
        s += ((i >= 0)? a[i] - '0': 0); 
        s += ((j >= 0)? b[j] - '0': 0); 
  
        // If current digit sum is 1 or 3, add 1 to result 
        result = char(s % 2 + '0') + result; 
  
        // Compute carry 
        s /= 2; 
  
        // Move to next digits 
        i--; j--; 
    } 
    return result; 
} 
int main()
{
    long long int x,n,m,t,i,flag,sd=0;
    vector <long int> v;
    cin>>x;
    string s;
    t=x;
    while(x!=0)
    {
        if(x%2==0)
            s+='0';
        else
            s+='1';
        x=x/2;
    }
    reverse(s.begin(), s.end()); 
    //cout<<s<<"\n";
    int k=100;
    while(1&&k--)
    {
    flag=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            if(flag==0)
                v.push_back(s.length()-i);
            flag=1;
            s[i]='1';
        }
        else if(flag==1)
            s[i]='0';
    }
    //cout<<s<<"\n";
    if(flag==0)
        break;
    flag=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        sd=1;
        break;
    }
    s=addBinary(s,"1");
   // cout<<s<<"\n\n";
    }
    //cout<<"\n";
    if(!sd)
    {
    cout<<2*v.size()<<endl;
    }
    else    
        cout<<2*v.size()-1<<endl;
    for(auto it:v)
        cout<<it<<" ";
}