#include<bits/stdc++.h>
using namespace std;
bool sortinrev(const pair<long long int,long long int> &a,  
               const pair<long long int,long long int> &b) 
{ 
       return (a.first > b.first); 
} 

struct sort_pred {
    bool operator()(const pair<long long int,long long int> &left, const pair<long long int,long long int> &right) {
        return left.second < right.second;
    }
};

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
	
	long long int n,i,l1,l2,t1,t2,arr[600005];
	vector < pair<long long int,long long int>>v,v1,v2;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>t1>>t2;
			arr[t1]=i+1;
		if(t1<t2)
			v1.push_back({t1,t2});
		else
			v2.push_back({t1,t2});

	}

	sort(v1.begin(), v1.end(), sortinrev); 
	sort(v2.begin(), v2.end(), sort_pred()); 
	if(v1.size()>v2.size())
	{
		cout<<v1.size()<<"\n";

		for(auto itr=v1.begin();itr!=v1.end();itr++)
				cout<<arr[itr->first]<<" "; 
	}
	else
	{
		cout<<v2.size()<<"\n";

		for(auto itr=v2.begin();itr!=v2.end();itr++)
				cout<<arr[itr->first]<<" ";//<<itr->second<<"\n";		
	}
	return 0;
}