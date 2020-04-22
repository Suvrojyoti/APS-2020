#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long int n,arr[200005],i,sum,mx=-11,temp,ind,ng[200005][2],a,b;
	unsigned long long int q,t;
	list <long long int> l;
	cin>>n>>q;
	for(i=0;i<n;i++)
	{
	    cin>>temp;
	    l.push_back(temp);
	    if(mx<temp)
	    {
	        mx=temp;
	        ind=i;
	    }
	}
	for(i=0;i<ind;i++)
	{
	    a=l.front();
	    l.pop_front();
	    b=l.front();
	    l.pop_front();
	    ng[i][0]=a;
	    ng[i][1]=b;
	    l.push_front(max(a,b));
	    l.push_back(min(a,b));
	}
	memset(arr,0,n*sizeof(arr[i]));
	i=0;
	for(auto itr=++l.begin();itr!=l.end();itr++)
	{
	    arr[i]=*itr;
	    i++;
	}
//	for(i=0;i<n-1;i++)
//	    cout<<arr[i]<<" ";
	// cout<<"\n";
	while(q--)
	{
	    cin>>t;
	    if(t<=ind)
	        cout<<ng[t-1][0]<<" "<<ng[t-1][1]<<"\n";
	   else
	        cout<<mx<<" "<<arr[(t-ind-1)%(n-1)]<<"\n";
	}
	return 0;
}