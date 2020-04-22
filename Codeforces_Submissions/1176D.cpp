#include<bits/stdc++.h> 
using namespace std; 
const long long MAX_SIZE = 2750140; 

// isPrime[] : isPrime[i] is true if number is prime 
// prime[] : stores all prime number less than N 
// SPF[] that store smallest prime factor of number 
// [for Exp : smallest prime factor of '8' and '16' 
// is '2' so we put SPF[8] = 2 , SPF[16] = 2 ] 
vector<long long >isprime(MAX_SIZE , true); 
vector<long long >prime; 
vector<long long >SPF(MAX_SIZE); 

// function generate all prime number less then N in O(n) 
void manipulated_seive(int N) 
{ 
	// 0 and 1 are not prime 
	isprime[0] = isprime[1] = false ; 

	// Fill rest of the entries 
	for (long long int i=2; i<N ; i++) 
	{ 
		// If isPrime[i] == True then i is 
		// prime number 
		if (isprime[i]) 
		{ 
			// put i into prime[] vector 
			prime.push_back(i); 

			// A prime number is its own smallest 
			// prime factor 
			SPF[i] = i; 
		} 

		// Remove all multiples of i*prime[j] which are 
		// not prime by making isPrime[i*prime[j]] = false 
		// and put smallest prime factor of i*Prime[j] as prime[j] 
		// [ for exp :let i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ] 
		// so smallest prime factor of '10' is '2' that is prime[j] ] 
		// this loop run only one time for number which are not prime 
		for (long long int j=0; 
			j < (int)prime.size() && 
			i*prime[j] < N && prime[j] <= SPF[i]; 
			j++) 
		{ 
			isprime[i*prime[j]]=false; 

			// put smallest prime factor of i*prime[j] 
			SPF[i*prime[j]] = prime[j] ; 
		} 
	} 
} 
int main()
{
    manipulated_seive(2750139); 
    long long int n,temp,i;
    multiset <long long int, greater <long long int> > com; 
     multiset <long long int> pr;
    //multiset <long long int> pr,com;
    cin>>n;
    for(i=0;i<2*n;i++)
    {
        cin>>temp;
        if(isprime[temp])
            pr.insert(temp);
        else
            com.insert(temp);
    }
   /* for(auto itr=com.begin();itr!=com.end();itr++)
        cout<<*itr<<" ";
    cout<<"\n";
    for(auto itr=pr.begin();itr!=pr.end();itr++)
        cout<<*itr<<" ";
    cout<<"\n";*/
    for(auto itr=com.begin();itr!=com.end();itr++)
    {
        temp=SPF[*itr];
        temp=*itr/temp;
       // cout<<temp<<" ";
        if(isprime[temp])
        {
            auto itr=pr.find(temp);
            if(itr!=pr.end())
            pr.erase(itr);
        }
        else
        {
            auto itr=com.find(temp);
            if(itr!=com.end())
            com.erase(itr);
        }
       
    }
    //cout<<"\n";
 /*  for(auto itr=pr.begin();itr!=pr.end();itr++)
        cout<<*itr<<" ";
    cout<<"\n";*/
    n=pr.size();
  //  cout<<"**"<<pr.size()<<"\n";
    auto itr=pr.begin();
    for(i=0;i<n/2;i++)
    {
        auto itr1=itr;
        auto it=pr.find(prime[*itr1-1]);
        pr.erase(it);
        itr++;
    }
 /*   for(i=0;i<n/2;i++)
    {
        auto itr=pr.find(prime[i]);
        if(itr!=pr.end())
        pr.erase(itr);
        cout<<prime[i]<<" ";
    }*/
    // cout<<"\n";
    for(auto itr=com.begin();itr!=com.end();itr++)
        cout<<*itr<<" ";
    for(auto itr=pr.begin();itr!=pr.end();itr++)
        cout<<*itr<<" ";
    
}