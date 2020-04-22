#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,single,last,lastval,i,tot,temp,sum;
    cin>>n>>t;
    single=n/t;
    last=n%t;
    lastval=single+1;
    sum=1;
    //if(single>1)
    {
        for(i=single;i>single-2;i--)
            sum=sum*i;
        sum=sum/2;
        sum=sum*(t-last);
        //cout<<"//"<<lastval;
        temp=1;
        for(i=lastval;i>lastval-2;i--)
        {
            temp=temp*i;
        }
        temp=temp*last;
        temp=temp/2;
        //cout<<"**"<<temp;
        tot=temp+sum;
        cout<<tot;
    }
    {
        lastval=n+1-t;
        temp=1;
        for(i=lastval;i>lastval-2;i--)
        {
            temp=temp*i;
        }
        temp=temp/2;
        cout<<" "<<temp;
        
        
    }
    return 0;
}