#include<bits/stdc++.h> 
using namespace std;
int main() 
{
    long int n,i,j,k=5,flag=0;
    char c1,c2,t1,t2,t3,arr[4];
    cin>>c1>>c2;
    while(k--)
    {
        cin>>t1>>t2;
        if(t1==c1)
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
        else if(t2==c2)
        {
            cout<<"YES\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"NO\n";
	//code
	return 0;
}