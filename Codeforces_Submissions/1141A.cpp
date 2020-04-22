#include <bits/stdc++.h>
using namespace std ;
 
int main() 
{
	long long int n , m , c = 0 ;
	cin>>n>>m;
	while(n != m)
	{
	    if(m%(n*2)!=0&&m%(n*3)!=0)
	    {
	        cout<<"-1";
	        exit(0);
	    }
		if(m%(n*2) == 0)
		{
			n = n*2 ;
			c++ ;
		}
		else
		{
			n = n*3 ;
			c++ ;
		}
	}
	cout << c ;
	return 0 ;
}