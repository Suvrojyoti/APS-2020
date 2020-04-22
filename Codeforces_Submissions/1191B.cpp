#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll m1[15],p1[15],s1[15];
ll m2[5],p2[5],s2[5],i,j,sum;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input1.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output1.txt", "w", stdout);
	#endif
    
    string s;
    for(i=0;i<3;i++)
    {
    		cin>>s;
    		if(s[1]=='s')
    		{
    			s1[s[0]-'0']++;
    		}
    		else if(s[1]=='m')
    		{
    			m1[s[0]-'0']++;
    		}
    		else
    		{
    			p1[s[0]-'0']++;
    		}

    }
    for(i=0;i<10;i++)
    {
    	if(s1[i]==3||p1[i]==3||m1[i]==3)
    	{
    		cout<<"0";
    		exit(0);
    	}
    }
    for(i=0;i<10;i++)
    {
    	if(s1[i]==2||p1[i]==2||m1[i]==2)
    	{
    		cout<<"1";
    		exit(0);
    	}
    }
    for(i=0;i<10;i++)
    {
    	if(s1[i]==1&&s1[i+1]==1&&s1[i+2]==1)
    	{
    		cout<<"0";
    		exit(0);
    	}
    	if(m1[i]==1&&m1[i+1]==1&&m1[i+2]==1)
    	{
    		cout<<"0";
    		exit(0);
    	}
    	if(p1[i]==1&&p1[i+1]==1&&p1[i+2]==1)
    	{
    		cout<<"0";
    		exit(0);
    	}

    }
    for(i=0;i<10;i++)
    {
    	if((s1[i]==1&&s1[i+1]==1)||(s1[i]==1&&s1[i+2]==1))
    	{
    		cout<<"1";
    		exit(0);
    	}
    	if((m1[i]==1&&m1[i+1]==1)||(m1[i]==1&&m1[i+2]==1))
    	{
    		cout<<"1";
    		exit(0);
    	}
    	if((p1[i]==1&&p1[i+1]==1)||(p1[i]==1&&p1[i+2]==1))
    	{
    		cout<<"1";
    		exit(0);
    	}

    }
    cout<<"2";
    return 0;
}