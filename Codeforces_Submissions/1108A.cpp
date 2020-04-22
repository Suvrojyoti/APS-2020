#include<bits/stdc++.h> 
using namespace std;

int main() {
    long long int test,l1,l2,r1,r2,i;
    cin>>test;
    while(test--)
    {
        cin>>l1>>r1>>l2>>r2;
        if(r1-l1>=r2-l2)
        {
            
            for(i=l1;i<=r1;i++)
            {
                if(i!=l2)
                {
                    cout<<i<<" ";
                    break;
                }
            }
            cout<<l2;
        }
        else
        {
            cout<<l1<<" ";
            for(i=l2;i<=r2;i++)
            {
                if(i!=l1)
                {
                    cout<<i;
                    break;
                }
            }
            
        }
        cout<<"\n";
    }
	return 0;
}