#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define sort stable_sort
#define all(x) (x).begin(),(x).end()
#define rep(i,x) for (register int (i)=(1);(i)<=(x);(i)++)
#define rep2(i,x) for (register int (i)=(x);(i)>=(1);(i)--)
#define foreach(it,c) for(__typeof((c).begin()) it=(c).begin();it!=(c).end();it++)
using namespace std;
int n,m,s;
int a[500005];
int main(){
	scanf("%d",&n);
	rep(i,n) scanf("%d",&a[i]);
	rep(i,n-1){
		if (a[i]==1){
			if (a[i+1]==2){
				s+=3;
			}else{
				s+=4;
			}
		}else if (a[i]==2){
			if (a[i+1]==1){
				s+=3;
			}else{
				puts("Infinite");
				return 0;
			}
		}else{
			if (a[i+1]==1){
				s+=4;
				if (a[i+2]==2){
					s--;
				}
			}else{
				puts("Infinite");
				return 0;
			}
		}
	}
	puts("Finite");
	printf("%d\n",s);
	return 0;
}