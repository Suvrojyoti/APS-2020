#include <bits/stdc++.h>
using namespace std;

long long int n,m;

void diff(long int a, long int b)
{
    long int l1,l2,k1,k2;
    l1=a/m;
    l2=a%m;
    k1=b/m;
    k2=b%m;
    cout<<k1+1<<" "<<k2+1<<"\n";
    
    //cout<<"("<<k1<<","<<k2<<") , ("<<l1<<","<<l2<<")\n";
   // cout<<k1-l1<<" "<<k2-l2<<"\n";
}
 
int main() {

	    long long int i,j,cnt,k;
	    cin>>n>>m;
        i=0;
        j=n*m-1;
        cnt=0;
        while(i<=j)
        {
            //cout<<i<<" "<<j<<"\n";
            if(cnt%2==0)
            {
                diff(j,i);
                i++;
            }
            else
            {
                diff(i,j);
                j--;
            }
            cnt++;
            
            
        }
        return 0;
}