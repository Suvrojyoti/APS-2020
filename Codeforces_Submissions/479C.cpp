#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
int n,ans=-1;
cin>>n;
pair <int,int> s[n];
for(int i=0;i<n;i++){cin>>s[i].first>>s[i].second;}
sort(s,s+n);
for(int i=0;i<n;i++){
    if(ans<=s[i].second)ans=s[i].second;
    else ans=s[i].first;
}
cout<<ans;
    return 0;
}