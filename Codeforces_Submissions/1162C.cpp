#include <bits/stdc++.h>

using namespace std;

void convert(long long int arr[], long long int n) 
{ 
    // Create a temp array and copy contents 
    // of arr[] to temp 
    long long int temp[n]; 
    memcpy(temp, arr, n*sizeof(long long int)); 
  
    // Sort temp array 
    sort(temp, temp + n); 
  
    // Create a hash table. Refer  
    // http://tinyurl.com/zp5wgef  
    unordered_map<long long int, long long int> umap; 
  
    // One by one insert elements of sorted 
    // temp[] and assign them values from 0 
    // to n-1 
    long long int val = 0; 
    for (long long int i = 0; i < n; i++) 
        umap[temp[i]] = val++; 
  
    // Convert array by taking positions from 
    // umap 
    for (long long int i = 0; i < n; i++) 
        arr[i] = umap[arr[i]]; 
} 

int main() {
    long long int n,k,arr[200000],next[200000]={0},prev[200000]={0},num[200000]={0},i,sum,m;
    cin>>m>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    //convert(arr,n);
   /* for(i=0;i<n;i++)
    {
      //  arr[i]=arr[i]+1;
        cout<<arr[i];
    }*/
    for(i=0;i<n;i++)
    {
        num[arr[i]]=1;
        if(num[arr[i]-1])
            next[arr[i]-1]=1;
        if(num[arr[i]+1])
            prev[arr[i]+1]=1;
    }
    sum=3*m-2;
    if(num[1])
        sum--;
    if(num[m])
        sum--;
    if(next[1])
        sum--;
    if(prev[m])
        sum--;
    for(i=2;i<m;i++)
    {
        if(num[i])
            sum--;
        if(next[i])
            sum--;
        if(prev[i])
            sum--;
    }
    if(sum<0)
    sum=0;
    cout<<sum;
    return 0;
}